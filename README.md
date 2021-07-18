# libft
Recreating a set of the libc functions, as defined in their man, with the same prototype and behaviors as the originals.

## Part 2

| Function | Description |
|----------|-------------|
| ft_substr | Allocates (with malloc) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. |
| ft_strjoin | Allocates (with malloc) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
| ft_strtrim | Allocates (with malloc) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
| ft_split | Allocates (with malloc) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer. |
| ft_itoa | Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
| ft_strmapi | Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc) resulting from successive applications of ’f’. |
| ft_striteri | Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary. |
| ft_putchar_fd | Outputs the character ’c’ to the given file descriptor. |
| ft_putstr_fd | Outputs the string ’s’ to the given file descriptor. |
| ft_putendl_fd | Outputs the string ’s’ to the given file descriptor, followed by a newline. |
| ft_putnbr_fd | Outputs the integer ’n’ to the given file descriptor. |

## Makefile

| Command | Usage |
| --- | --- |
| `make` | creates .o files for each function as well as the main library file, libft.a |
| `make clean` | removes the .o files used to create the library |
| `make fclean` | removes the .o & .a files used to create the library |
| `make re` | removes all .o & .a files then remakes them |

## tests
   
* [Libftest](https://github.com/jtoty/Libftest)
* [libft Unit tests](https://github.com/alelievr/libft-unit-test)
* [libft-war-machine](https://github.com/ska42/libft-war-machine)
* [libftTester](https://github.com/Tripouille/libftTester)
