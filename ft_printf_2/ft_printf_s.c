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

static void	ft_print(char *s, t_list *tag)
{
	while (*s && tag->prec)
	{
		tag -> size += ft_putchar(*s);
		tag->prec--;
		s++;
	}
}

static void	ft_space(char *s, t_list *tag)
{
	while (tag->width)
	{
		tag->size += ft_putchar(' ');
		tag->width -= 1;
	}
}

int			ft_print_s(t_list *tag, va_list ap)
{
	char	*str;

	str = ft_strdup(va_arg(ap, char *));
	ft_size_s(str, tag);
	if (tag->left != EXEC)
		ft_space(str, tag);
	ft_print(str, tag);
	if (tag->left == EXEC)
		ft_space(str, tag);
	free(str);
	return (SUCCESS);
}
