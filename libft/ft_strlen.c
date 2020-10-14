/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 20:24:48 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/14 15:46:59 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	unsigned char	*cpy_str;
	size_t			size;

	size = 0;
	cpy_str = (unsigned char *)str;
	while (*cpy_str)
	{
		size++;
		cpy_str++;
	}
	return (size);
}
