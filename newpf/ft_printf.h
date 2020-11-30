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

typedef struct	s_tag
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
}				t_tag;

int		ft_printf(const char *format, ...);

void	ft_flag(char **format, t_tag *tag);
void	ft_width(char **format, va_list ap, t_tag *tag);
void	ft_precision(char **format, va_list ap, t_tag *tag);

int		ft_strchr_opt(char ch, char *str);
int		ft_isnum(char **format);
int		ft_putchar(char ch);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
char	*ft_strdup(const char *str);
char	*ft_strnjoin(char const *s1, char const *s2, int n);
char		*ft_u_itoa(long long n);

int		ft_print_d(t_tag *tag, int n);
int		ft_print_s(t_tag *tag, char *s);
int		ft_print_c(t_tag *tag, char s);
int		ft_print_u(t_tag *tag, unsigned int n);
/*int		ft_print_per(t_tag *tag);
int		ft_print_p(t_tag *tag, unsigned long n);
int		ft_print_x(t_tag *tag, unsigned int n);
int		ft_print_X(t_tag *tag, unsigned int n); */

void	ft_size_d(char *s, t_tag *tag, long long n);

#endif
