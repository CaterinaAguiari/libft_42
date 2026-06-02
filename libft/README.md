*This project has been created as part of the 42 curriculum by caguiari.*

# Libft

## Description

Libft is the first foundational project of the 42 curriculum. 
The goal is to recreate a custom C standard library by reimplementing essential libc functions, as well as additional utility functions and linked list management tools.

This library is designed to be reused in future 42 projects and helps build a deeper understanding of:

- memory management
- string manipulation
- pointers
- dynamic allocation
- linked lists
- low-level programming in C

---

# Instructions

## Compilation

Compile the library using:

```bash
make
```

This will generate:

```bash
libft.a
```

### Available rules

```bash
make        # compile the library
make clean  # remove object files
make fclean # remove object files and library
make re     # rebuild everything
```

---

# Library Functions

## Part 1 - Libc Functions

### Character checks

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic. |
| `ft_isdigit` | Checks if a character is a digit. |
| `ft_isalnum` | Checks if a character is alphanumeric. |
| `ft_isascii` | Checks if a character is part of the ASCII table. |
| `ft_isprint` | Checks if a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

---

### String functions

| Function | Description |
|---|---|
| `ft_strlen` | Returns the length of a string. |
| `ft_strlcpy` | Copies a string safely into a buffer. |
| `ft_strlcat` | Concatenates strings safely into a buffer. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to `n` characters. |
| `ft_strnstr` | Finds a substring inside another string. |
| `ft_strdup` | Duplicates a string using dynamic allocation. |
| `ft_atoi` | Converts a string to an integer. |

---

### Memory functions

| Function | Description |
|---|---|
| `ft_memset` | Fills a block of memory with a value. |
| `ft_bzero` | Sets a block of memory to zero. |
| `ft_memcpy` | Copies memory from one location to another. |
| `ft_memmove` | Copies memory safely even with overlapping regions. |
| `ft_memchr` | Searches for a byte inside a memory block. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_calloc` | Allocates and zero-initializes memory. |

---

# Part 2 - Additional Functions

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a new one. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string using a delimiter. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character of a string and returns a new string. |
| `ft_striteri` | Applies a function to each character of a string in-place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

---

# Part 3 - Linked List Functions

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Deletes a single node. |
| `ft_lstclear` | Deletes and frees an entire list. |
| `ft_lstiter` | Applies a function to each node of a list. |
| `ft_lstmap` | Creates a new list by applying a function to each node. |

---

# Resources

- AI-Gemini: It guided me through the building of the code, not by giving me the finished code, but helping me with the logic, and the occasional debugging.
- GeeksforGeeks
- W3Schools

## Documentation

- "Programmazione in C" by Kim N. King
- Linux man pages
- 42 intra subject
- "C Programming for dummies" by Dan Gookin

---

# AI Usage

AI was used as a support and learning tool during the development of this project.

It was mainly used for:

- studying and understanding low-level C concepts
- reviewing memory manipulation logic
- testing and validating some functions
- writing and structuring this README

All code was manually written, tested, and reviewed to ensure full understanding of the implementations.
