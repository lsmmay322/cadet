/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:46:56 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/06 17:03:20 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getrow(char const *s, char c)
{
	int size;

	size = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s && !(*s == c))
		{
			size++;
			while (*s && !(*s == c))
				s++;
		}
	}
	return (size);
}


char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	
	i = 0;
	if (!(str = (char **)malloc(sizeof(char *) * (ft_getrow(s, c) + 1))))
		return (0);
	while (
