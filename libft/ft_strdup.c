/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:28:25 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/05 16:44:46 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int i;
	int size;
	char *dest;
	
	i = 0;
	size = ft_strlen(str);
	if(!(dest = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	while (i < size)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
