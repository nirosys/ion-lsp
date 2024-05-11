FROM ubuntu:latest

RUN apt-get update && \
    apt-get install -y rustc cargo nodejs && \
    cargo install tree-sitter-cli

ENTRYPOINT ["tree-sitter-cli"]
