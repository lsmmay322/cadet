/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:38:37 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/03 16:20:35 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_findnl(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int	ft_put_line(char **backup, char **line, int ind_nl, int sz)
{
	char	*tmp;
	int		size;

	if (ind_nl != -1 && sz != 0)
	{
		size = (ind_nl == -1) ? ft_strlen(*backup) : ind_nl;
		(*backup)[size] = '\0';
		*line = (size == 0) ? ft_strdup("") : ft_strdup(*backup);
		tmp = ft_strdup((*backup) + (ind_nl + 1));
		free(*backup);
		*backup = ft_strdup(tmp);
		free(tmp);
		return (1);
	}
	else if (*backup != NULL && sz == 0)
	{
		*line = ft_strdup(*backup);
		free(*backup);
		*backup = NULL;
	}
	else
		*line = ft_strdup("");
	return (0);
}

int	get_next_line(int fd, char **line)
{
	static char	*backup[OPEN_MAX];
	char		*buff;
	int			size;
	int			find_nl;
	char		*tmp;

	size = 1;
	if (fd < 0 || line == 0 || OPEN_MAX < fd || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buff = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (((find_nl = ft_findnl(backup[fd])) == -1) &&
			(size = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[size] = '\0';
		if (backup[fd] == NULL)
			backup[fd] = ft_strdup("");
		tmp = ft_strjoin(backup[fd], buff);
		free(backup[fd]);
		backup[fd] = ft_strdup(tmp);
		free(tmp);
	}
	free(buff);
	buff = NULL;
	return ((size < 0) ? -1 : ft_put_line(&backup[fd], line, find_nl, size));
}
