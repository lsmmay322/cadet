# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwalee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/04 20:20:49 by hwalee            #+#    #+#              #
#    Updated: 2020/10/05 21:45:58 by hwalee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	  ft_memchr.c ft_memcmp.c ft_strlen.c ft_strchr.c ft_strrchr.c \
	  ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	  ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	  ft_calloc.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar cr $(NAME) $(OBJS)

%.o : %.c libft.h
	$(CC) $(CLFAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re all
