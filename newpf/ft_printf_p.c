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

// 맥환경에서는 아마도 if((void *)n != NULL) 부분을 지워주면 될 것이다.
static void	ft_print(char *s, t_tag *tag, unsigned long n)
{
	if ((void *)n != NULL)
	{
		tag->size += ft_putchar('0');
		tag->size += ft_putchar('x');
	}
	while (*s)
	{
		tag->size += ft_putchar(*s);
		s++;
	}
}

static void	ft_space(t_tag *tag)
{
	while (tag->width > 0)
	{
		tag->size += ft_putchar(' ');
		tag->width -= 1;
	}
}

static void	ft_size_p(char *s, t_tag *tag, unsigned long n)
{
	if ((void *)n != NULL)
	{
		if (tag->width > (ft_strlen(s) + 2))
			tag->width -= (ft_strlen(s) + 2);
		else
			tag->width = 0;
	}
	else
	{
		if (tag->width > ft_strlen(s))
			tag->width -= ft_strlen(s);
		else
			tag->width = 0;
	}
}

int			ft_print_p(t_tag *tag, unsigned long n)
{
	char	*s;
	char	*buff;

	if ((s = ft_hax(n, 1)) == 0)
		return (ERROR);
	if ((void *)n == NULL)
	{
		free(s);
/* 		if (tag->prec == 0)
			s = ft_strdup("");
		else
			s = ft_strdup("0"); */
		s = ft_strdup("(nil)");
	}
	ft_size_p(s, tag, n);
	if (tag->left != EXEC)
		ft_space(tag);
	ft_print(s, tag, n);
	if (tag->left == EXEC)
		ft_space(tag);
	free(s);
	return (SUCCESS);
}
