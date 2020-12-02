/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:14:41 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/21 13:10:54 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_space(t_tag *tag)
{
	while (tag->width - 1 > 0)
	{
		if (tag->z_sign != EXEC)
			tag->size += ft_putchar(' ');
		else if (tag->z_sign == EXEC && tag->left != EXEC)
			tag->size += ft_putchar('0');
		else if (tag->z_sign == EXEC && tag->left == EXEC)
			tag->size += ft_putchar(' ');
		tag->width--;
	}
}

int			ft_print_per(t_tag *tag)
{
	if (tag->left != EXEC)
		ft_space(tag);
	tag->size += ft_putchar('%');
	if (tag->left == EXEC)
		ft_space(tag);
	return (SUCCESS);
}
