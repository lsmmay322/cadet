/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 13:37:29 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/14 21:16:02 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		size;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	if ((little == NULL && big == NULL) || len == 0)
		return (NULL);
	size = ft_strlen(little);
	while (i < len && big[j])
	{
		if (i + size > len)
			return (NULL);
		if (ft_strncmp(big + j, little, size) == 0)
			return ((char *)big + i);
		i++;
		j++;
	}
	return (NULL);
}
