/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 20:22:09 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/06 20:46:03 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;

	cpy_dest = dest;
	cpy_src = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*cpy_dest++ = *cpy_src++;
	return (dest);
}
