/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:35:07 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/09 15:38:28 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = ft_strlen(s);
	if (fd < 0)
		return ;
	while (i < len)
		write(fd, &s[i++], 1);
}
