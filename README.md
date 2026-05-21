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
### Using the library in your project
```
# Compile your project and link against libft
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```
Include the header in your source files:
```
#include "libft.h"
```
## Library Overview

Below is an overview of the implemented functions, grouped by behavior and purpose.
### Character classification and transformation
These functions check character properties or convert case:
- **ft_isalpha** - checks  for  an  alphabetic character.
- **ft_isdigit** - checks for a digit (0 through 9).
- **ft_isalnum** - checks for an alphanumeric character.
- **ft_isascii** - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
- **ft_isprint** - checks for any printable character including space.
- **ft_toupper** -  If c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists in the current locale.  Otherwise, it returns c.
- **ft_tolower** - If c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation exists in the current locale.  Otherwise, it returns c.
### String manipulation
Functions for string examination, copying, concatenation, trimming, and searching:
- **ft_strlen** - The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
- **ft_strlcpy** - The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
- **ft_strlcat** - The strlcat() function copy and concatenate strings respectively. strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result as long as size is larger than 0.Note that a byte for the NUL should be included in size.  Also note that strlcat() only operate on true “C” strings.  This means that strlcat() both src and dst must be NUL-terminated.
- **ft_strchr** - The strchr() function returns a pointer to the first occurrence of the character c in the string s.
- **ft_strrchr** - The strrchr() function returns a pointer to the last occurrence of the character c in the string s.
- **ft_strncmp** - The strncmp() function compares only the first (at most) n bytes of s1 and s2.
- **ft_strnstr** - The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.
- **ft_strdup** -  The strdup() function returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with malloc(3), and can be freed with free(3).
- **ft_substr** - Allocates memory (using malloc(3)) and returns a substring from the string ’s’. The substring starts at index ’start’ and has a maximum length of ’len’.
- **ft_strjoin** - Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating ’s1’ and ’s2’.
- **ft_strtrim** - Allocates memory (using malloc(3)) and returns acopy of ’s1’ with characters from ’set’ removed from the beginning and the end.
- **ft_split** - Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. Each string in the returned array is allocated independently. The array of pointers itself is also allocated dynamically. The returned array must be NULL terminated.
- **ft_strmapi** - Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to store the results from the successive applications of f.
- **ft_striteri** - Applies the function ’f’ to each character of the string passed as argument, passing its index at the first argument. Each character is passed by address to ’f’ so it can be modified if necessary.
### Memory manipulation
Low-level operations on raw memory blocks:
- **ft_memset** - The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c. The memset() function returns a pointer to the memory area s.
- **ft_bzero** - The  bzero()  function  erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
- **ft_memcpy** - The  memcpy()  function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap. The memcpy() function returns a pointer to dest.
- **ft_memmove** - The  memmove()  function  copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest. 
- **ft_memchr** - The  memchr()  function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.
- **ft_memcmp** - The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2. 
- **ft_calloc** - The calloc() function allocates memory for an array of nmemb elements of size  byteseach  and returns a pointer to the allocated memory.  The memory is set to zero.

### Numeric conversions
- **ft_atoi** - Converts string number into integer. Works with numbers from min_int to max_int. Skip all spaces. Allow one plus or minus.
- **ft_itoa** - Allocates memory (using malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

### File descriptor output
Utility functions that write characters, strings, or numbers to any file descriptor:
- **ft_putchar_fd** - Outputs the character ’c’ to the specified file descriptor.
- **ft_putstr_fd** - Outputs the string ’s’ to the specified file descriptor.
- **ft_putendl_fd** - Outputs the string ’s’ to the specified file descriptor followed by a newline.
- **ft_putnbr_fd** - Outputs the integer ’n’ to the specified file descriptor.

## Resources
### Documentation & references
- Linux man pages
- [Geeksforgks](https://www.geeksforgeeks.org/)