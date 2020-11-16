/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:33:22 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/14 12:56:11 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_tag_init(t_list *tag)
{
	tag -> left = 0;
	tag -> plus = 0;
	tag -> space = 0;
	tag -> shap = 0;
	tag -> zero = 0;
	tag -> width = 0;
	tag -> prec = 0;
}

static int	ft_format_tag(char **format, t_list *tag, va_list ap)
{
	if (**(++format) == '\0')
		return (ERROR);
	ft_flag(format, tag);
	if (**format == '\0')
		return (ERROR);
	ft_width(format, tag, ap);
	if (**format) == '\0')
		return (ERROR);
	ft_precision(format, tag, ap);
	return (SUCCESS);
}

static int	ft_specifier(char **format, t_list *tag, va_list ap)
{
	if (ft_strchr_opt(**format, SPEC) == ERROR)
		return (ERROR);
	if (**format == 'c')
		ft_print_c(tag, ap);
	else if (**format == 's')
		ft_print_s(tag, ap);
	else if (**format == 'p')
		ft_print_p(tag, ap);
	else if (**format == 'd')
		ft_print_d(tag, ap);
	else if (**format == 'i')
		ft_print_i(tag, ap);
	else if (**format == 'u')
		ft_print_u(tag, ap);
	else if (**format == 'x')
		ft_print_x(tag, ap);
	else if (**format == 'X')
		ft_print_X(tag, ap);
	else if (**format == '%')
		ft_print_per(tag, ap);
	format++;
	return (SUCCESS);
}

static int	ft_format(char *format, t_list *tag, va_list ap)
{
	if (format == NULL)
		return (ERROR);
	tag -> size = 0;
	while (*format)
	{
		if (*format != '%')
		{
			tag -> size++;
			ft_putchar(**format);
		}
		else
		{
			ft_tag_init(tag);
			if (ft_format_tag(&format, tag, ap) == ERROR)
				return (ERROR);
			if (ft_specifier(&format, tag, ap) == ERROR)
				return (ERROR);
		}
		format++;
	}
	return (SUCCESS);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_list	tag;

	va_start(ap, format);
	if (ft_format(format, &tag, ap) == ERROR)
		return (ERROR);
	return (tag.size);
}
