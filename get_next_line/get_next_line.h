/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:39:44 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/28 14:23:33 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <limits.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int		ft_findnl(char *str);
int		ft_put_line(char **backup, char **line, int ind_nl, int sz);
int		get_next_line(int fd, char **line);
void	ft_strlcpy(char **dest, char *src);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);
char 	*ft_strjoin1(char const *s1, char const *s2);

#endif
