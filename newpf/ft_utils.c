/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 20:46:20 by hwalee            #+#    #+#             */
/*   Updated: 2020/12/01 19:50:50 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strchr_opt(char ch, char *str)
{
	while (*str)
	{
		if (*str == ch)
			return (SUCCESS);
		str++;
	}
	return (FAIL);
}

int	ft_isnum(char **format)
{
	int		res;

	res = 0;
	while (**format >= '0' && **format <= '9')
	{
		res = res * 10 + (**format - '0');
		(*format)++;
	}
	return (res);
}

int	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return (1);
}
