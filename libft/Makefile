# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwalee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/04 20:20:49 by hwalee            #+#    #+#              #
#    Updated: 2020/10/04 20:21:14 by hwalee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	  ft_memchr.c ft_memcmp.c ft_strlen.c

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
