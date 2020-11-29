# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwalee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 13:11:18 by hwalee            #+#    #+#              #
#    Updated: 2020/11/26 23:29:00 by hwalee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
LIBFT = libft
LIBFT_A = libft.a
CFALGS = -Wall -Werror -Wextra
SRC = ft_printf.c

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	make all -C $(LIBFT)/
	cp $(LIBFT)/$(LIBFT_A) $(NAME)
	ar cr $@ $(OBJS)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	make clean -C $(LIBFT)
	rm -f $(OBJS)
fclean : clean
	make fclean -C $(LIBFT)
	rm -f $(NAME)

re : fclean clean all

.PHONY : clean fclean re all
