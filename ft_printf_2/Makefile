# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwalee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 13:11:18 by hwalee            #+#    #+#              #
#    Updated: 2020/11/21 14:59:18 by hwalee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = a.out
CFALGS = -Wall -Werror -Wextra
SRC = main.c ft_printf.c ft_printf_d.c ft_utils.c ft_size.c \
	  ft_tag.c

OBJS = $(SRC:.c=.o)

all : $(NAME);

$(NAME) : $(OBJS)
	$(CC) -o $@ $(OBJS)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)
fclean :
	rm -f $(NAME)

re : fclean clean all

.PHONY : clean fclean re all
