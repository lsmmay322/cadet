/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 20:46:20 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/13 21:18:34 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_strchr_opt(char ch, char *str)
{
	while (*str)
	{
		if (*str == ch)
			return (SUCCESS);
		str++;
	}
	return (ERROR);
}

int			ft_isnum(char **format)
{
	int		res;

	res = 0;
	while (**format >= '0' && **format <= '9')
	{
		res = res * 10 + (**format - '0');
		(*format)++;
	}
	return (res);
}

int			ft_putchar(char ch)
{
	write(1, &ch, 1);
	return (1);
}

size_t		ft_strlen(const char *str)
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

static int	ft_getlen(int n)
{
	int size;

	size = 0;
	if (n < 0)
		size += 1;
	if (n == 0)
		return (2);
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char		*ft_itoa(int n)
{
	int		size;
	char	*str;
	long	cpy_n;

	cpy_n = n;
	size = ft_getlen(n);
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	if (cpy_n < 0)
	{
		str[0] = '-';
		cpy_n *= -1;
	}
	str[--size] = '\0';
	size--;
	if (cpy_n == 0)
		str[0] = '0';
	while (cpy_n)
	{
		str[size--] = (cpy_n % 10) + '0';
		cpy_n /= 10;
	}
	return (str);
}

char		*ft_strdup(const char *str)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = ft_strlen(str);
	if (!(dest = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	while (i < size)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strnjoin(char const *s1, char const *s2, int n)
{
	int		size;
	int		i;
	char	*str;

	i = 0;
	size = ft_strlen(s1) + n;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (*s1)
		str[i++] = *s1++;
	while (*s2 && n > 0)
	{
		str[i++] = *s2++;
		n--;
	}
	str[i] = '\0';
	return (str);
}


static int	ft_u_getlen(long long n)
{
	int size;

	size = 0;
	if (n < 0)
		size += 1;
	if (n == 0)
		return (2);
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char		*ft_u_itoa(long long n)
{
	int			size;
	char		*str;
	long long	cpy_n;

	cpy_n = n;
	size = ft_u_getlen(n);
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	if (cpy_n < 0)
	{
		str[0] = '-';
		cpy_n *= -1;
	}
	str[--size] = '\0';
	size--;
	if (cpy_n == 0)
		str[0] = '0';
	while (cpy_n)
	{
		str[size--] = (cpy_n % 10) + '0';
		cpy_n /= 10;
	}
	return (str);
}

static int	ft_h_getlen(long long n)
{
	int size;

	size = 0;
	if (n < 0)
		size += 1;
	if (n == 0)
		return (2);
	while (n)
	{
		n /= 16;
		size++;
	}
	return (size + 1);
}

char		*ft_hax(long long n, int op)
{
	int			size;
	char		*str;
	long long	cpy_n;
	char		ch;

	cpy_n = n;
	size = ft_h_getlen(n);
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	str[--size] = '\0';
	size--;
	if (cpy_n == 0)
		str[0] = '0';
	while (cpy_n)
	{
		if (cpy_n % 16 >= 10 && op == 1)
			ch = cpy_n % 16 + 'a' - 10;
		else if (cpy_n % 16 >= 10 && op == 2)
			ch = cpy_n % 16 + 'A' - 10;
		else
			ch = cpy_n % 16 + '0';
		str[size--] = ch;
		cpy_n /= 16;
	}
	return (str);
}
