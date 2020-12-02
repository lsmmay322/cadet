/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:35:43 by hwalee            #+#    #+#             */
/*   Updated: 2020/12/01 19:35:47 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_h_getlen(long long n)
{
	int size;

	size = 0;
	if (n < 0)
		size += 1;
	if (n == 0)
		return (2);
	while (n)
	{
		n /= 8;
		size++;
	}
	return (size + 1);
}

char		*ft_oct(long long n)
{
	int			size;
	char		*str;
	long long	cpy_n;

	cpy_n = n;
	size = ft_h_getlen(n);
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	str[--size] = '\0';
	size--;
	if (cpy_n == 0)
		str[0] = '0';
	while (cpy_n)
	{
		str[size--] = cpy_n % 8 + '0';
		cpy_n /= 8;
	}
	return (str);
}
