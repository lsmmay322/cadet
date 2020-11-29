/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 20:53:48 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/07 19:42:56 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
