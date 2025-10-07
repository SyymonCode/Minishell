# Minishell 🐚

A fully functional **mini Bash shell** implemented in **C**, developed as part of the 42 curriculum.

This project recreates key features of the Bash shell, providing an in-depth understanding of **UNIX system programming**, **process management**, and **I/O handling**.

## 🔧 Features

* Command execution (built-in and external commands)
* Pipes (`|`), redirections (`>`, `<`, `>>`), and logical operators (`&&`, `||`)
* Environment variable management
* Signal handling (Ctrl+C, Ctrl+D, Ctrl+)
* Custom **parser** and **lexer** for command interpretation
* Robust **error handling** and **memory management**

## 🧠 Key Learnings

Through Minishell, I explored:

* Process creation and communication (`fork`, `exec`, `wait`)
* File descriptors and redirection mechanisms
* Shell behavior and command-line parsing
* System calls and interaction with the kernel

## 🚀 How to Run

```bash
make
./minishell
```

## 📚 Technologies

* Language: **C**
* Environment: **UNIX / Linux**
* Tools: **Makefile**, **Git**

Minishell was a deep dive into the internals of how a shell operates — from parsing user input to managing multiple processes and ensuring a stable, interactive terminal experience.
