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

static void	ft_print(char *s, t_tag *tag)
{
	if (*s == '+' || *s == '-')
		tag->size += ft_putchar(*s++);
	if (tag->left != EXEC)
	{
		while (tag->zero > 0)
		{
			tag->size += ft_putchar('0');
			tag->zero -= 1;
		}
	}
	while (tag->prec > 0)
	{
		tag->size += ft_putchar('0');
		tag->prec -= 1;
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

static char	*ft_hax(unsigned int n)
{
	char *s;
	char *ch;

	s = ft_strdup("");
	ch = (char *)malloc(sizeof(char) * 2);
	ch[1] = '\0';
	while (n > 0)
	{
		if (n % 16 >= 10)
			ch[0] = 'A' + (n % 16) - 10;
		else
			ch[0] = (n % 16) + '0';
		s = ft_strnjoin(s, ch, 1);
		n /= 16;
	}
	free(ch);
	return (s);
}

static void	ft_inverse(char **s)
{
	int		size;
	int		i;
	char	tmp;

	size = ft_strlen(*s);
	i = 0;
	while (i <= --size)
	{
		tmp = (*s)[i];
		(*s)[i] = (*s)[size];
		(*s)[size] = tmp;
		i++;
	}
}

int			ft_print_X(t_tag *tag, va_list ap)
{
	unsigned int	n;
	char			*s;

	n = (unsigned int)va_arg(ap, int);
	if (n != 0)
		s = ft_hax(n);
	else
		s = ft_strdup("0");
	ft_inverse(&s);
	if (tag->p_sign == EXEC && tag->prec == 0)
		if (n == 0)
		{
			ft_space(tag);
			return (SUCCESS);
		}
	ft_size_d(s, tag, n);
	if (tag->left != EXEC)
		ft_space(tag);
	ft_print(s, tag);
	if (tag->left == EXEC)
		ft_space(tag);
	free(s);
	return (SUCCESS);
}
