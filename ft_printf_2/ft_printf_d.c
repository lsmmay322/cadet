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

static char	*ft_sign(int n, char *s, t_list *tag)
{
	if (tag->plus == EXEC)
	{
		if (n >= 0)
			s = ft_strjoin("+", s);
	}
	else
	{
		if (tag->space == EXEC && n >= 0)
			tag->size += ft_putchar(' ');
	}
	return (s);
}

static void	ft_print(char *s, t_list *tag)
{
	if (*s == '+' || *s == '-')
		tag->size += ft_putchar(*s++);
	if (tag->left != EXEC)
	{
		while (tag->zero > 0)
		{
			tag->size += ft_putchar('0');
			tag->zero -= 1;
		}
	}
	while (tag->prec > 0)
	{
		tag->size += ft_putchar('0');
		tag->prec -= 1;
	}
	while (*s)
	{
		tag->size += ft_putchar(*s);
		s++;
	}
}

static void	ft_space(t_list *tag)
{
	while (tag->width > 0)
	{
		tag->size += ft_putchar(' ');
		tag->width -= 1;
	}
}

int			ft_print_d(t_list *tag, va_list ap)
{
	int		n;
	char	*s;

	n = va_arg(ap, int);
	if (tag->p_sign == EXEC && tag->prec == 0)
	{
		if(n == 0)
		{
			ft_space(tag);
			return (SUCCESS);
		}
	}
	s = ft_itoa(n);
	s = ft_sign(n, s, tag);
	ft_size_d(s, tag, n);
	if (tag->left != EXEC)
		ft_space(tag);
	ft_print(s, tag);
	if (tag->left == EXEC)
		ft_space(tag);
	free(s);
	return (SUCCESS);
}
