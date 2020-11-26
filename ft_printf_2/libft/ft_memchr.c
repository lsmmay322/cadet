/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 20:23:26 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/05 20:21:14 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*cpy_str;
	size_t			i;
	unsigned char	cpy_c;

	cpy_c = c;
	i = 0;
	cpy_str = (unsigned char *)str;
	while (i < n)
	{
		if (cpy_str[i] == cpy_c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
