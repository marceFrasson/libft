# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfrasson <mfrassonstudent.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/05 12:40:00 by mfrasson          #+#    #+#              #
#    Updated: 2021/02/06 16:45:02 by mfrasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	  ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	  ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_itoa.c \
	  #ft_split.c ft_strmapi.c ft_putnbr_fd.c


CC=clang
HEADER=libft.h
INCLUDES= libft.h
NAME=libft.a
FLAGS = -Wall -Wextra -Werror
OBJS=$(SRC:.c=.o)
OBJS_BONUS=$(BNS:.c=.o)


all:	$(NAME)

$(NAME):	$(HEADER) $(SRC)
	@clang $(FLAGS) -I $(HEADER) -c $(SRC)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@rm -f $(OBJS_BONUS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all