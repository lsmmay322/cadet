/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:46:56 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/13 22:13:01 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getrow(char const *s, char c)
{
	int size;

	size = 0;
	while (*s)
	{
		if (*s && !(*s == c))
		{
			size++;
			while (*s && !(*s == c))
				s++;
		}
		s++;
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

void		ft_free(char **str, int n)
{
	int i;

	i = 0;
	while (i < n)
		free(str[i++]);
	free(str);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	if (!(str = (char **)malloc(sizeof(char *) * (ft_getrow(s, c) + 1))))
		return (0);
	while (*s)
	{
		j = 0;
		if (*s && (*s == c))
			s++;
		if (*s && !(*s == c))
		{
			if (!(str[i] = (char *)malloc(sizeof(char) * ft_getcol(s, c) + 1)))
				ft_free(str, i - 1);
			while (*s && !(*s == c))
				str[i][j++] = *s++;
			str[i][j] = '\0';
			i++;
		}
	}
	str[i] = 0;
	return (str);
}
