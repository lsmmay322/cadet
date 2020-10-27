/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:39:59 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/27 18:08:19 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_strlcpy(char **line, char *src)
{
	int i;

	i = 0;
	if (!src || !*line)
		return ;
	while (src[i] != '\0')
	{
		*line[i] = src[i];
		i++;
	}
	*line[i] = '\0';
}

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

char	*ft_strjoin1(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 && s2)
	{
		len1 = ft_strlen((char *)s1);
		len2 = ft_strlen((char *)s2);
		str = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


