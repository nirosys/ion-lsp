# Ion LSP
This repo is a work in progress, but hopes to provide a language server protocol
implementation for the Ion data format.

The LSP implementation leans on a tree-sitter grammar for robust editor-friendly parsing
and ion-rust for any materialization, or other "hands-on" ion Ser/De.

Eventually, the LSP will include support for the Ion Schema Language.

The actual LSP Server is located in (ion-language-server/)[ion-langauge-server/].
The tree-sitter grammer is located in (ion-tree-sitter/)[ion-tree-sitter/].
