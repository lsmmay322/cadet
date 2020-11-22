/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:43:21 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/16 18:02:10 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define ERROR -1
#define SUCCESS 1
#define FAIL 0
#define EXEC 1

#define SPEC "cspdiuxX%"
#define FLAG "-+ #0"
#define WIDTH '*'
#define PRECISION '.'

typedef struct	s_list
{
	int	size;
	int	left;
	int	plus;
	int	space;
	int	shap;
	int	zero;
	int z_sign;
	int	width;
	int prec;
	int p_sign;
	int p_len;
}				t_list;

int		ft_printf(const char *format, ...);

void	ft_flag(char **format, t_list *tag);
void	ft_width(char **format, va_list ap, t_list *tag);
void	ft_precision(char **format, va_list ap, t_list *tag);

int		ft_strchr_opt(char ch, char *str);
int		ft_isnum(char **format);
int    ft_putchar(char ch);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);

int		ft_print_d(t_list *tag, va_list ap);
void		ft_size_d(char *s, t_list *tag, int n);

#endif
