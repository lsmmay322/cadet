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
	
	size = ft_strlen(n);
	if (!(*str = (char *)malloc(sizeof(char) * (size + 1))))
		return (ERROR);
	return (SUCCESS);
}

static void ft_put_in_str(char **str, char *n)
{
    int i;

    i = 0;
    while (n[i] != '\0')
    {
        (*str)[i] = n[i];
        i++;
    }
    *str[i] = '\0';
}

int			ft_print_d(t_list *tag, va_list ap)
{

	char	*str;
	char	*n;

	if ((n = ft_itoa(va_arg(ap, int))) == 0)
			return (ERROR);
	if (ft_size_str(&str, tag, n) == ERROR)
		return (ERROR);
    ft_put_in_str(&str, n);
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	return (SUCCESS);
}