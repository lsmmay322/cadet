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

static void	ft_print(char *s, t_list *tag)
{
	while (*s)
	{
		tag -> size += ft_putchar(*s);
		tag->prec--;
		s++;
	}
}

static void	ft_space(char *s, t_list *tag)
{
	while (tag->width)
	{
		tag->size += ft_putchar(' ');
		tag->width -= 1;
	}
}

static char	*ft_prec_str(char *str, t_list *tag)
{
	char *tmp;
	char *res;

	tmp = ft_strdup("");
	while (tag->prec > 0)
	{
		tmp = ft_strnjoin(tmp, str, 1);
		tag->prec--;
		str++;
	}
	return (tmp);
}

int			ft_print_s(t_list *tag, va_list ap)
{
	char	*str;

	str = ft_strdup(va_arg(ap, char *));
	if (tag->p_sign == EXEC)
		str = ft_prec_str(str, tag);
	ft_size_s(str, tag);
	if (tag->left != EXEC)
		ft_space(str, tag);
	ft_print(str, tag);
	if (tag->left == EXEC)
		ft_space(str, tag);
	free(str);
	return (SUCCESS);
}
