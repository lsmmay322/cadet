/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:14:41 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/16 18:00:30 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size_str(char **str, t_list *tag, char *n)
{
	int	size;
	
	size = 0;
	if ((tag -> width) != 0 || (tag -> prec) != 0)
		size = ((tag -> width) > (tag -> prec)) ? width : prec;
	if (ft_strlen(n) >= size)
		size = ft_strlen(n);
	if (!(*str = (char *)malloc(sizeof(char) * (size + 1)))
		return (ERROR);
	return (SUCCESS);
}

static void	ft_d_flag(char **str, t_list *tag, va_list ap, char *n)
{
	int i;

	i = 0;
	if (tag -> plus == EXEC)
	{
		if (ap < 0)
			str = ft_strjoin("+", *str);
		else
			str = ft_strjoin("-", *str);
	}
	else if (tag -> plus != EXEC && tag -> space == EXEC)
		if (ap < 0)
			str = ft_strjoin("-", *str);
	if (tag -> left == EXEC)
		while (n[i])
		{
			(*str)[i] = n[i];
			i++;
		}
		
}

static void	ft_d_prec(char **str, t_list *tag)
{
	int width;

	width = tag -> width;
}

int			ft_print_d(t_list *tag, va_list ap)
{

	char	*str;
	char	*n;

	//if ((n = ft_itoa(va_arg(ap, int))) == 0)
	//		return (ERROR);
	//if (ft_size_str(&str, tag, n) == ERROR)
	//	return (ERROR);
	//ft_d_flag(&str, tag, ap, n);
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	return (SUCCESS);
}
