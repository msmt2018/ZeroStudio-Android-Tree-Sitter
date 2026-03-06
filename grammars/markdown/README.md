# tree-sitter-markdown

[![CI][ci]](https://github.com/tree-sitter-grammars/tree-sitter-markdown/actions)

[![discord][discord]](https://discord.gg/w7nTvsVJhm)

[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)

[![npm][npm]](https://www.npmjs.com/package/@tree-sitter-grammars/tree-sitter-markdown)

[![crates][crates]](https://crates.io/crates/tree-sitter-md)

[![pypi][pypi]](https://pypi.org/project/tree-sitter-markdown/)

一个用于 [tree-sitter] 的 Markdown 解析器。

![screenshot](https://github.com/MDeiml/tree-sitter-markdown/blob/split_parser/.github/screenshot.png)

该解析器旨在根据 [CommonMark 规范] 读取 Markdown，

但也包含一些来自不同来源的规范扩展，例如 [Github 风格 Markdown]。这些扩展可以在编译时启用或禁用。

有关详细信息，请参阅 [Extensions](#extensions)

## 目标

尽管此解析器已存在一段时间，并且一些显而易见的问题

大部分已解决，但输出中仍然存在许多不准确之处。这些不准确之处源于
将 Markdown 这种复杂的格式限制在相当严格的
tree-sitter 解析规则中。

因此，不建议在对正确性要求较高的场景下使用此解析器。此解析器的主要目标是为诸如 [neovim] 和 [helix] 等解析器提供语法信息，以便进行语法高亮显示。

## 贡献

欢迎所有贡献。详情请参阅 [CONTRIBUTING.md]。

## 扩展

扩展可以在编译时通过环境变量启用。部分扩展默认启用，可以使用环境变量 `NO_DEFAULT_EXTENSIONS` 禁用它们。

| 名称 | 环境变量 | 规范 | 默认值 | 同时启用 |

|:----:|:--------------------:|:-------------:|:-------:|:------------:|

| GitHub 风格 Markdown | `EXTENSION_GFM` | [链接](https://github.github.com/gfm/) | ✓ | 任务列表、删除线、管道表 |

| 任务列表 | `EXTENSION_TASK_LIST` | [链接](https://github.github.com/gfm/#task-list-items-extension-) | ✓ | |

| 删除线 | `EXTENSION_STRIKETHROUGH` | [链接](https://github.github.com/gfm/#strikethrough-extension-) | ✓ | |

| 管道表 | `EXTENSION_PIPE_TABLE` | [链接](https://github.github.com/gfm/#tables-extension-) | ✓ | |

| YAML 元数据 | `EXTENSION_MINUS_METADATA` | [链接](https://gohugo.io/content-management/front-matter/) | ✓ | |

| TOML 元数据 | `EXTENSION_PLUS_METADATA` | [链接](https://gohugo.io/content-management/front-matter/) | ✓ | |

| 标签 | `EXTENSION_TAGS` | [链接](https://help.obsidian.md/Editing+and+formatting/Tags#Tag+format) | | |

| Wiki 链接 | `EXTENSION_WIKI_LINK` | [链接](https://help.obsidian.md/Linking+notes+and+files/Internal+links) | | |

## 在编辑器中的使用

有关如何在特定编辑器中使用此解析器的指南，请参阅该编辑器的文档，例如：

* [neovim](https://github.com/nvim-treesitter/nvim-treesitter)

* [helix](https://docs.helix-editor.com/guides/adding_languages.html)

## 独立使用

要使用这两个语法，请先使用块语法解析文档。

然后使用内联语法执行第二次解析，并使用 `ts_parser_set_included_ranges` 来指定哪些部分是内联内容。

这些部分被标记为 `inline` 节点。这些内联节点的子节点应

从这些范围中排除。示例实现请参见 `bindings` 文件夹中的 `lib.rs` 文件。

### 与 WASM 的用法

遗憾的是，目前此解析器无法直接与 WASM/web-tree-sitter 一起使用。这是因为该解析器使用了一些 tree-sitter 默认未导出的 C 函数。要解决此问题，您可以将解析器静态链接到 tree-sitter。另请参阅 https://github.com/tree-sitter/tree-sitter/issues/949、https://github.com/MDeiml/tree-sitter-markdown/issues/126 和 https://github.com/MDeiml/tree-sitter-markdown/issues/93

[CommonMark 规范]: https://spec.commonmark.org/

[Github flavored markdown]: https://github.github.com/gfm/

[tree-sitter]: https://tree-sitter.github.io/tree-sitter/

[neovim]: https://neovim.io/

[helix]: https://helix-editor.com/

[CONTRIBUTING.md]: https://github.com/MDeiml/tree-sitter-markdown/blob/split_parser/CONTRIBUTING.md

[ci]: https://img.shields.io/github/actions/workflow/status/tree-sitter-grammars/tree-sitter-markdown/ci.yml?logo=github&label=CI

[Discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord

[Matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix

[npm]: https://img.shields.io/npm/v/%40tree-sitter-grammars%2Ftree-sitter-markdown?logo=npm

[crates]: https://img.shields.io/crates/v/tree-sitter-md?logo=rust

[PyPI]: https://img.shields.io/pypi/v/tree-sitter-markdown?logo=pypi&logoColor=ffd242