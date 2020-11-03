/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:39:59 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/28 14:53:55 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s)
{
	char	*cpy;
	int		i;
	int		size;

	size = ft_strlen(s);
	if (!(cpy = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		size;
	int		i;
	int		j;
	char	*cpy;

	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(cpy = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	while (s2[j])
		cpy[i++] = s2[j++];
	cpy[i] = '\0';
	return (cpy);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
