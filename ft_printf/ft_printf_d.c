/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:14:41 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/15 16:14:42 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_size_str(char **str, t_list *tag)
{
	int	size;

	size = ((tag -> width) > (tag -> prec)) ? width : prec;
	if (strlen(str) >= size)
		return ;

}

static void	ft_d_flag(char **str, t_list *tag, va_list ap)
{
	if (tag -> plus == EXEC)
	{
		if (ap < 0)
			str = ft_strjoin("+", *str);
		else
			str = ft_strjoin("-", *str);
	}
	else
		if (ap < 0)
			str = ft_strjoin("-", *str);
}

static void	ft_d_width(char **str, t_list *tag)
{
	int width;

	width = tag -> width;
}

void		ft_print_d(t_list *tag, va_list ap)
{
	char	*ch;
	char	*str;

	str = ft_strdup("");
	ch = ft_itoa(va_arg(ap, int));
	str = ft_strjoin(str, ch);
	ft_size_str(&str, tag);
	ft_d_flag(&str, tag);
	ft_d_width(&str, tag);
	ft_d_prec(&str,tag);
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
