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

void	ft_flag(char **format, va_list ap, t_list *tag)
{
	char flag;

	while (ft_strchr_opt(**format, FLAG) == SUCCESS)
	{
		if (**format == '-')
			tag -> left = EXEC;
		if (**format == '+')
			tag -> plus = EXEC;
		if (**format == ' ')
			tag -> space = EXEC;
		if (**format == '#')
			tag -> shap = EXEC;
		if (**format == '0')
			tag -> zero = EXEC;
		format++;
	}
}

void	ft_width(char **format, va_list ap, t_list *tag)
{
	int	width;

	if (**format == '*')
	{
		width = va_arg(ap, int);
		if (width < 0)
		{
			tag -> left = EXEC;
			width *= -1;
		}
		tag -> width = width;
		format++;
	else
	{
		width = ft_isnum(format);
		tag -> width = width;
	}
}

void	ft_precision(char **format, va_list ap, t_lit *tag)
{
	int prec;

	if (**format == '*')
	{
		prec = va_arg(ap, int);
		if (prec < 0)
			tag -> prec = 0;
		else
			tag -> prec = prec;
		format++;
	}
	else if(**format == '.')
	{
		format++;
		prec = ft_isnum(format);
		tag -> prec = prec;
	}
	else
		return ;
}
