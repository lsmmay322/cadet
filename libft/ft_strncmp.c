/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:23:04 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/05 21:16:18 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;
	size_t			i;

	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	i = 0;
	if (!cpy_s1 || !cpy_s2 || n == 0)
		return (0);
	while (i < (n - 1) && cpy_s1[i] && (cpy_s1[i] == cpy_s2[i]))
		i++;
	return (cpy_s1[i] - cpy_s2[i]);
}
