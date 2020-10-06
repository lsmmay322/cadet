/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 20:12:59 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/05 15:29:26 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*cpy_str;

	i = 0;
	cpy_str = (unsigned char *)str;
	ch = c;
	while (i++ < n)
		*cpy_str++ = c;
	return (str);
}
