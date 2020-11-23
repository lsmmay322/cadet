/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:14:41 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/21 13:10:54 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(char s, t_list *tag)
{
		tag -> size += ft_putchar(s);
}

static void	ft_space(t_list *tag)
{
	if (tag->width != 0)
		tag->width--;
	while (tag->width)
	{
		tag->size += ft_putchar(' ');
		tag->width -= 1;
	}
}

int			ft_print_c(t_list *tag, va_list ap)
{
	char	ch;

	ch = (char)va_arg(ap, int);
	if (tag->left != EXEC)
		ft_space(tag);
	ft_print(ch, tag);
	if (tag->left == EXEC)
		ft_space(tag);
	return (SUCCESS);
}
