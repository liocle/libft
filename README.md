# libft

A custom C library containing various standard functions implemented from scratch. This library is part of a programming project inspired by the 42 school curriculum.

## Table of Contents
- [Introduction](#introduction)
- [List of Functions](#list-of-functions)
- [Usage](#usage)
- [How to Include in Your Project](#how-to-include-in-your-project)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Introduction

`libft` is a collection of C functions that replicate the behavior of some standard library functions as well as additional utility functions. These functions were implemented as part of a learning exercise, focusing on memory manipulation, string handling, and basic data structures.

## List of Functions

- `ft_atoi`
- `ft_bzero`
- `ft_calloc`
- `ft_isalnum`
- `ft_isalpha`
- `ft_isascii`
- `ft_isdigit`
- `ft_isprint`
- `ft_itoa`
- `ft_lstadd_back`
- `ft_lstadd_front`
- `ft_lstclear`
- `ft_lstdelone`
- `ft_lstiter`
- `ft_lstlast`
- `ft_lstmap`
- `ft_lstnew`
- `ft_lstsize`
- `ft_memchr`
- `ft_memcmp`
- `ft_memcpy`
- `ft_memmove`
- `ft_memset`
- `ft_printf`
- `ft_printf_putnbr_dec_hex_ptr`
- `ft_printf_utils`
- `ft_putchar_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`
- `ft_putstr_fd`
- `ft_split`
- `ft_strchr`
- `ft_strdup`
- `ft_striteri`
- `ft_strjoin`
- `ft_strlcat`
- `ft_strlcpy`
- `ft_strlen`
- `ft_strmapi`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strrchr`
- `ft_strtrim`
- `ft_substr`
- `ft_tolower`
- `ft_toupper`

## Usage

To use this library in a C projects, simply include the appropriate header file and link with the compiled `libft.a` archive.

## How to Include in a Project

1. Clone the repository:
   ```bash
   git clone git@github.com:liocle/libft.git

2. Build the library:
   ```bash
   make

3. Link a project with `libft.a` archive:
   ```bash
   gcc -o your_program your_source.c -L. -lft

## Example
```c
#include "libft.h"

int main() {
    char *str = "Hello World!";
    ft_putstr_fd(str, 1);

    return 0;
}
