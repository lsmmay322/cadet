/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:39:44 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/26 14:46:52 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <limits.h>
#include <stdlib.h>

int		ft_findnl(char *str, char c);
int		ft_put_line(char *backup, cahr **line, int ind_nl, int eof);
int		get_next_line(int fd, char **line);
void	ft_strlcpy(cpy **dest, char *src);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);

#endif
