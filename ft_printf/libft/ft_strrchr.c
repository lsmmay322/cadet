/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 13:06:34 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/06 20:47:09 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*cpy_str;
	unsigned char	cpy_c;
	int				i;

	cpy_str = (char *)str;
	cpy_c = c;
	i = 0;
	while (cpy_str[i])
		i++;
	while (i >= 0)
	{
		if (cpy_str[i] == cpy_c)
			return (cpy_str + i);
		i--;
	}
	return (0);
}
