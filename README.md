*This project has been created as part of the 42 curriculum by skorenev.*
# libft
## Description
The libft project consists in creating a personal C library that reimplements a selection of essential standard C library functions.
The goal is to build a reliable set of low‑level utilities that can be reused across future projects at 42.
These functions reproduce the behavior of their corresponding libc or BSD counterparts and provide a foundation for string manipulation, memory handling, and basic algorithms.

The library includes:
- reimplementations of fundamental libc functions
- additional helper functions for working with strings, memory, and file descriptors  
- full compliance with the Norm  
- functions designed to behave identically to the originals in edge cases and error handling

## Instructions
### Requirements
- The library must compile with the flags
```-Wall -Wextra -Werror```
- All .c files, header files, and the Makefile must be stored at the root of the repository.
- The functions must not crash unexpectedly.
- No global variables may be used.
- Memory leaks are strictly forbidden.
### Compilation
To compile the library:
```
make
```
To clean object files:
```
make clean
```
To clean both objects and the library:
```
make fclean
```
To fully rebuild:
```
make re
```
## Library Overview

Below is an overview of the implemented functions, grouped by behavior and purpose.
### Character classification and transformation
These functions check character properties or convert case:
- ft_isalpha
- ft_isdigit  
- ft_isalnum  
- ft_isascii  
- ft_isprint  
- ft_toupper  
- ft_tolower
### String manipulation
Functions for string examination, copying, concatenation, trimming, and searching:
- ft_strlen  
- ft_strlcpy  
- ft_strlcat  
- ft_strchr  
- ft_strrchr  
- ft_strncmp  
- ft_strnstr  
- ft_strdup  
- ft_substr  
- ft_strjoin  
- ft_strtrim  
- ft_split  
- ft_strmapi  
- ft_striteri
### Memory manipulation
Low-level operations on raw memory blocks:
- ft_memset  
- ft_bzero  
- ft_memcpy  
- ft_memmove  
- ft_memchr  
- ft_memcmp  
- ft_calloc

### Numeric conversions
- ft_atoi  
- ft_itoa

### File descriptor output
Utility functions that write characters, strings, or numbers to any file descriptor:
- ft_putchar_fd  
- ft_putstr_fd  
- ft_putendl_fd  
- ft_putnbr_fd