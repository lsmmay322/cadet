/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:44:18 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/09 15:46:04 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = ft_strlen(s);
	if (fd < 0)
		return ;
	while (i < len)
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
