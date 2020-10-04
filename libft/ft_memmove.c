/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 20:23:08 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/04 20:23:16 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;

	cpy_dest = dest;
	cpy_src = (unsigned char *)src;
	if (src > dest)
		while (n--)
			*cpy_dest++ = *cpy_src++;
	else
	{
		cpy_src += n;
		cpy_dest += n;
		while (n--)
			*--cpy_dest = *--cpy_src;
	}
	return (dest);
}
