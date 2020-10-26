/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:38:37 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/26 18:08:10 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_findnl(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int	ft_put_line(char *backup, char **line, char *str)
{
	char	*tmp;

	
}

int	get_next_line(int fd, char **line)
{
	static char	*backup[OPEN_MAX];
	char		buff[BUFFER_SIZE + 1];
	int			size;
	int			find_nl;
	char		*tmp;

	if (fd < 0 || line == 0)
		return (-1);
	while ((size = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[size] = '\0';
		if (backup[fd] == 0)
			backup[fd] = ft_strdup("");
		tmp = ft_strjoin(backup[fd], buff);
		free(backup[fd]);
		backup = tmp;
		free(tmp);
		if ((find_nl = ft_findnl(backup[fd], '\n') >= 0)
			return (ft_put_line(backup[fd], line, find_nl));
	}
	size = ft_strlen(backup[fd]);
	return (ft_put_line(backup[fd], line, size));
}
