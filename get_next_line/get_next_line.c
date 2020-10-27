/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:38:37 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/27 21:19:57 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

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

int	ft_put_line(char **backup, char **line, int ind_nl)
{
	char	*tmp;
	int		size;	
	static int count = 1;
	size = (ind_nl == -1) ? ft_strlen(*backup) : ind_nl;
	//printf("size is %d\n", size);
	(*backup)[size] = '\0';
	if (size == 0)
		*line = strdup("");
	else
		*line = strdup(*backup);
		
//	printf("line is %s\n", *line);
	if (ind_nl != -1 &&*(*backup + ind_nl + 1) != '\0')
	{
		printf("this func called %d time\n", count++);
		tmp = strdup((*backup) + (ind_nl + 1));
		free(*backup);
		*backup = strdup(tmp);
		free(tmp);
		return (1);
	}
	return (0);
}

int	get_next_line(int fd, char **line)
{
	static char	*backup[OPEN_MAX];
	char		*buff;
	int			size;
	int			find_nl;
	char		*tmp;

	if (fd < 0 || line == 0 || OPEN_MAX < fd || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buff = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (((find_nl = ft_findnl(backup[fd])) == -1) &&
			(size = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[size] = '\0';
	//	printf("buff is %s\n", buff);
		if (backup[fd] == NULL)
			backup[fd] = strdup("");
		tmp = ft_strjoin(backup[fd], buff);
		free(backup[fd]);
		backup[fd] = tmp;
	//	printf("back is %s\n", backup[fd]);
	}
	//printf("back is %s\n", backup[fd]);
	//printf("nl is %d\n", find_nl);
	free(buff);
	buff = NULL;
	return (ft_put_line(&backup[fd], line, find_nl));
}
