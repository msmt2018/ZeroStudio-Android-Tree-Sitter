/*
 *  This file is part of android-tree-sitter.
 *
 *  android-tree-sitter library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.
 *
 *  android-tree-sitter library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *  along with android-tree-sitter.  If not, see <https://www.gnu.org/licenses/>.
 */

package com.itsaky.androidide.treesitter

import java.io.File
import org.gradle.api.DefaultTask
import org.gradle.api.GradleException
import org.gradle.api.tasks.TaskAction

/**
 * Task for building the tree-sitter lib.
 *
 * @author Akash Yadav
 * @author android_zero (Refactored to auto-detect cargo executable)
 */
abstract class BuildTreeSitterTask : DefaultTask() {

  companion object {
    // Gradle property to manually specify the cargo executable path if auto-detection fails.
    private const val CARGO_EXECUTABLE_PROPERTY = "rust.cargo.executable"
  }

  /**
   * Dynamically finds the 'cargo' executable path.
   *
   * This function searches for the cargo executable in the following order:
   * 1. A path specified in the project's gradle.properties (`rust.cargo.executable`).
   * 2. The standard `$CARGO_HOME/bin` directory.
   * 3. The system's `PATH` environment variable.
   * 4. The default `~/.cargo/bin` directory.
   *
   * @return The absolute path to the 'cargo' executable.
   * @throws GradleException if 'cargo' cannot be found.
   */
  private fun findCargoExecutable(): String {
    // 1. Check for user-defined path in gradle.properties
    project.findProperty(CARGO_EXECUTABLE_PROPERTY)?.let {
      val path = it.toString()
      if (File(path).canExecute()) {
        project.logger.info("Using 'cargo' from '$CARGO_EXECUTABLE_PROPERTY' property: $path")
        return path
      }
    }

    // 2. Check CARGO_HOME environment variable (standard for rustup)
    System.getenv("CARGO_HOME")?.let { cargoHome ->
      val cargoFile = File(cargoHome, "bin/cargo")
      if (cargoFile.canExecute()) {
        project.logger.info("Found 'cargo' in CARGO_HOME: ${cargoFile.absolutePath}")
        return cargoFile.absolutePath
      }
    }

    // 3. Search in system PATH
    val osName = System.getProperty("os.name").lowercase()
    val isWindows = osName.contains("win")
    val executableName = if (isWindows) "cargo.exe" else "cargo"
    val pathSeparator = File.pathSeparator

    System.getenv("PATH")?.split(pathSeparator)?.forEach { pathDir ->
      val cargoFile = File(pathDir, executableName)
      if (cargoFile.canExecute()) {
        project.logger.info("Found 'cargo' in system PATH: ${cargoFile.absolutePath}")
        return cargoFile.absolutePath
      }
    }

    // 4. Check default location as a last resort
    val defaultCargoPath = File(System.getProperty("user.home"), ".cargo/bin/cargo")
    if (defaultCargoPath.canExecute()) {
      project.logger.info("Found 'cargo' in default location: ${defaultCargoPath.absolutePath}")
      return defaultCargoPath.absolutePath
    }

    // If not found, throw a helpful error
    throw GradleException(
        "Could not find the 'cargo' executable. \n" +
            "Please ensure Rust is installed correctly and 'cargo' is in your system's PATH. \n" +
            "Alternatively, you can specify the path in your 'gradle.properties' file: \n" +
            "$CARGO_EXECUTABLE_PROPERTY=~/.cargo/bin/cargo")
  }

  @TaskAction
  fun buildTsCli() {
    // The property name in the original code seems to be a typo. Let's assume it should check a project property.
    val buildFromSource = project.findProperty("com.itsaky.androidide.treesitter.buildFromSource")?.toString()?.toBoolean() ?: true
    if (!buildFromSource) {
      project.logger.warn(
        "Skipping tree-sitter-cli build as 'com.itsaky.androidide.treesitter.buildFromSource' is set to 'false'")
      return
    }

    val cargoExecutable = findCargoExecutable()
    
    val cliDir = project.rootProject.file("tree-sitter-lib/cli")
    val buildDir = File(cliDir, "build")

    val cmd = arrayOf(cargoExecutable, "b", "--target-dir", buildDir.absolutePath, "--release")

    project.logger.lifecycle(
      "Building tree-sitter-cli with command: ${cmd.joinToString(separator = " ")}")

    // Assuming project.executeCommand is an extension function that handles process execution
    project.exec {
        workingDir = cliDir
        commandLine(cmd.toList())
    }.assertNormalExitValue()
  }
}