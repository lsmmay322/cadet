/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:46:56 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/07 21:23:30 by hwalee           ###   ########.fr       */
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

static int	ft_getcol(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && !(s[i] == c))
		i++;
	return (i);
}

static char	*ft_check(char const *s)
{
	int i;
	char *str;

	i = 0;
	str = (char *)s;
	while (str[i] && str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '\0')
		return (0);
}	

char		**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	ft_check(s);
	i = 0;
	if (!(str = (char **)malloc(sizeof(char *) * (ft_getrow(s, c) + 1))))
		return (0);
	while (*s)
	{
		j = 0;
		while (*s && (*s == c))
			s++;
		if (*s && !(*s == c))
		{
			str[i] = (char *)malloc(sizeof(char) * (ft_getcol(s, c) + 1));
			while (*s && !(*s == c))
				str[i][j++] = *s++;
			str[i][j] = '\0';
		}
		i++;
	}
	str[i] = 0;
	return (str);
}
