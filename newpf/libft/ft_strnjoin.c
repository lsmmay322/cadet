/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:39:42 by hwalee            #+#    #+#             */
/*   Updated: 2020/12/01 19:39:52 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnjoin(char const *s1, char const *s2, int n)
{
	int		size;
	int		i;
	char	*str;

	i = 0;
	size = ft_strlen(s1) + n;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (*s1)
		str[i++] = *s1++;
	while (*s2 && n > 0)
	{
		str[i++] = *s2++;
		n--;
	}
	str[i] = '\0';
	return (str);
}
