/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tag.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 20:42:23 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/14 12:25:10 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flag(char **format, t_list *tag)
{
	int res;

	while (1)
	{
		res = ft_strchr_opt(**format, FLAG);
		if (res == FAIL)
			return ;
		if (**format == '0')
			tag->z_sign = EXEC;
		if (**format == '-')
			tag->left = EXEC;
		if (**format == '+')
			tag->plus = EXEC;
		if (**format == ' ')
			tag->space = EXEC;
		(*format)++;
		if (tag->left == EXEC)
			tag->z_sign = 0;
		if (tag->plus == EXEC)
			tag->space = 0;
	}
}

void	ft_width(char **format, va_list ap, t_list *tag)
{
	if (**format == '*')
	{
		tag->width = va_arg(ap, int);
		if (tag->width < 0)
		{
			tag->left = EXEC;
			tag->width *= -1;
		}
		(*format)++;
	}
	else
		tag->width = ft_isnum(format);
}

void	ft_precision(char **format, va_list ap, t_list *tag)
{
	if (**format == '.')
	{
		(*format)++;
		if (**format == '*')
		{
			tag->prec = va_arg(ap, int);
			if (tag->prec < 0)
			{
				tag->left = EXEC;
				tag->prec *= -1;
			}
			(*format)++;
		}
		else
			tag->prec = ft_isnum(format);
		tag->p_sign = EXEC;
	}
}
