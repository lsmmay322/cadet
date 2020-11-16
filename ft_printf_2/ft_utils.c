/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 20:46:20 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/13 21:18:34 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strchr_opt(char ch, char *str)
{
	while (*str)
	{
		if (ch == *str)
			return (SUCCESS);
		str++;
	}
	return (FAIL);
}

int		ft_isnum(char **format)
{
	int		res;

	res = 0;
	if (**format >= '0' && **format <= '9')
	{
		res = res * 10 + (**format - '0');
		format++;
	}
	return (res);
}

void    ft_putchar(char ch)
{
    write(1, &ch, 1);
}

size_t	ft_strlen(const char *str)
{
	unsigned char	*cpy_str;
	size_t			size;

	size = 0;
	cpy_str = (unsigned char *)str;
	while (*cpy_str)
	{
		size++;
		cpy_str++;
	}
	return (size);
}

static int	ft_getlen(int n)
{
	int size;

	size = 0;
	if (n < 0)
		size += 1;
	if (n == 0)
		return (2);
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char		*ft_itoa(int n)
{
	int		size;
	char	*str;
	long	cpy_n;

	cpy_n = n;
	size = ft_getlen(n);
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	if (cpy_n < 0)
	{
		str[0] = '-';
		cpy_n *= -1;
	}
	str[--size] = '\0';
	size--;
	if (cpy_n == 0)
		str[0] = '0';
	while (cpy_n)
	{
		str[size--] = (cpy_n % 10) + '0';
		cpy_n /= 10;
	}
	return (str);
}

