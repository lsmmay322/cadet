/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 20:22:52 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/04 20:22:54 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;
	unsigned char	cpy_c;
	size_t			i;

	cpy_dest = dest;
	cpy_src = (unsigned char *)src;
	cpy_c = c;
	i = 0;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		if (cpy_src[i] == cpy_c)
			return (dest + (i + 1));
		i++;
	}
	return (0);
}
