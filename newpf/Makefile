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
CFALGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_printf_d.c ft_utils.c ft_size_d.c \
		ft_tag.c ft_printf_c.c ft_printf_s.c ft_printf_u.c\
		ft_printf_x.c ft_printf_X.c ft_printf_p.c ft_printf_per.c

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar cr $@ $(OBJS)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)
fclean :
	rm -f $(NAME)

re : fclean clean all

.PHONY : clean fclean re all
