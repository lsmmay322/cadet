/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 20:23:52 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/07 20:17:07 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;
	int				size;

	if ((s1 == 0 && s2 == 0) || n == 0)
		return (0);
	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	while (*cpy_s1 && --n && (*cpy_s1 == *cpy_s2))
	{
		cpy_s1++;
		cpy_s2++;
	}
	size = *cpy_s1 - *cpy_s2;
	return (size);
}
