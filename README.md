_This project has been created as part of the 42 curriculum by mariafer._

## Description
The goal of this project is to recreate a set of standard C library functions and additional functions that will be useful in future projects. This projects helps to understand important concepts in C programming.

This library can be reused in other C projects.

## Instructions
To compile the library:
```bash
make
```

To remove the object files:
```bash
make clean
```

To remove the object files and the library:
```bash
make fclean
```

To recompile the project from scratch:
```bash
make re
```

### Usage example
After compiling the library, you can use it in another C file.
Example:
```C
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_strdup("Hello, Libft!");
	if (!str)
		return (1);
	printf("%s\n", str);
	free(str);
	return (0);
}
```

Compile it with:
```bash
cc main.c libft.a -o program
```

Then run:
```bash
./program
```
## Resources

## Feature list
#### Part 1
+ ft_isalpha
+ ft_isdigit
+ ft_isalnum
+ ft_isascii
+ ft_isprint
+ ft_strlen
+ ft_memset
+ ft_bzero
+ ft_memcpy
+ ft_memmove
+ ft_strlcpy
+ ft_strlcat
+ ft_toupper
+ ft_tolower
+ ft_strchr
+ ft_strrchr
+ ft_strncmp
+ ft_memchr
+ ft_memcmp
+ ft_strnstr
+ ft_atoi
+ ft_calloc
+ ft_strdup

#### Part 2
+ ft_substr
+ ft_strjoin
+ ft_strtrim
+ ft_split
+ ft_itoa
+ ft_strmapi
+ ft_striteri
+ ft_putchar_fd
+ ft_putstr_fd
+ ft_putendl_fd
+ ft_putnbr_fd

#### Part 3
+ ft_lstnew
+ ft_lstadd_front
+ ft_lstsize
+ ft_lstlast
+ ft_lstadd_back
+ ft_lstdelone
+ ft_lstclear
+ ft_lstiter
+ ft_lstmap