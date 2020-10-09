/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:39:09 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/09 15:41:49 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *ch;
	unsigned int i;
	unsigned int len;

	i = 0;
	ch = ft_itoa(n);
	len = ft_strlen(ch);
	if (fd < 0)
		return ;
	while (i < len)
		write(fd, &ch[i++], 1);
}
	
