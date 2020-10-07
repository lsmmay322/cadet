/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 13:37:29 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/07 20:55:05 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (ft_strlen(little) > len)
		return (0);
	while (i < len && big[i])
	{
		j = 0;
		k = 0;
		if (big[i] == little[k])
		{
			while (i + j < len && (big[i + j] == little[k]) && little[k++])
				j++;
			if (little[k] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}
