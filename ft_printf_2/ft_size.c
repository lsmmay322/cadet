/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:14:41 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/16 18:00:30 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_prec_d(t_list *tag, int size, int n)
{
	tag->prec -= size;
	tag->width = 0;
	if (tag->p_sign == EXEC)
		if (n < 0 || tag -> plus == EXEC)
			tag->prec++;
}

static void	ft_width_d(t_list *tag, int size, int n)
{
	tag->width -= size;
	if (tag->prec > size)
		tag->prec -= size;
	else
		tag->prec = 0;
	if (tag->p_sign == EXEC)
		if (n < 0 || tag->plus == EXEC)
			tag->prec++;
	tag->width -= tag->prec;
	if (tag->space == EXEC && n >= 0)
		tag->width -= 1;
}

void		ft_size_d(char *s, t_list *tag, int n)
{
	int size;

	size = ft_strlen(s);
	if (size >= tag->prec && size >= tag->width)
	{
		tag->prec = 0;
		tag->width = 0;
	}
	if (tag->prec == 0 && tag->width == 0)
		return ;
	else if (tag->prec >= tag->width)
		ft_prec_d(tag, size, n);
	else
		ft_width_d(tag, size, n);
	if (tag->p_sign == EXEC)
		tag->z_sign = 0;
	if (tag->z_sign == EXEC)
	{
		tag->zero = tag->width;
		tag->width = 0;
	}
}
