#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}

					t_list;

/*
** part 1
*/

int			ft_atoi(const char *str);
void		ft_bzero(void *str, size_t size);
void		*ft_calloc(size_t str, size_t size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(char c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memccpy(void *dst, const void *src, int c, size_t size);
void		*ft_memchr(const void *str, int c, size_t size);
int			ft_memcmp(const void *str1, const void *str2, size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t size);
void		*ft_memmove(void *str1, const void *str2, size_t size);
void		*ft_memset(void *str, int c, size_t size);
char		*ft_strchr(const char *str, int c);
char		*ft_strdup(const char *str);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strnstr(const char *src, const char *to_find, size_t n);
char		*ft_strrchr(const char *str, int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

/*
** part 2
*/

char		*ft_itoa(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *str, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *str, int fd);
char		**ft_split(char const *str, char c);
char		*ft_strjoin(char const *prefix, char const *suffix);
char		*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char		*ft_strtrim(char const *str, char const *ref);
char		*ft_substr(char const *str, unsigned int index, size_t size);

/*
** extra
*/

char	*ft_strncpy(char *dest, const char *src, unsigned int n);


#endif