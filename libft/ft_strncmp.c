/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:23:04 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/14 18:02:37 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;
	int				size;

	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n && *cpy_s1 && *cpy_s1 && (*cpy_s1 == *cpy_s2))
	{
		cpy_s1++;
		cpy_s2++;
	}
	size = *cpy_s1 - *cpy_s2;
	return (size);
}
