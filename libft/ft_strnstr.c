/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 13:37:29 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/06 21:27:30 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*cpy_big;
	unsigned char	*cpy_little;
	size_t			i;
	size_t			j;

	i = 0;
	if (!little)
		return ((char *)big);
	if (ft_strlen(little) < len)
		return (0);
	while (i < n && big[i])
	{
		j = 0;
		if (big[i] == little[j])
			while (i < n && (big[i] == little[j++]))
				i++;
		i++;
	}
	if (little[j] == '\0')
		return (big + i);
	return (0):
}
