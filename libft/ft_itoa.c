/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 20:53:48 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/06 21:01:42 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int n)
{
	int size;

	size = 0;
	if (n < 0)
	   	size++;
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
	int		i;

	i = 0;
	size = ft_getlen(n);
	if(!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	str[size--] = '\0';
	while(size)
	{
		str[size--] = n % 10 + '0';
		n /= 10;
	}
	reutrn (str);
}
