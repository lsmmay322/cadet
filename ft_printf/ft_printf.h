/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:43:21 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/14 12:47:36 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "FT_PRINTF_H"
#define "FT_PRINTF_H"

#include <stdarg.h>
#include <unistd.h>
#define ERROR -1
#define SUCCESS 0
#define FAIL 0
#define FLAG "-+ #0"
#define WIDTH '*'
#define PRECISION '.'
#define EXEC 1
#define SPEC "cspdiuxX%"

typedef struct	s_list
{
	int	size;
	int	left;
	int	plus;
	int	space;
	int	shap;
	int	zero;
	int	width;
	int prec;
}				t_list;

int		ft_printf(const char *format, ...);

void	ft_flag(char **format, t_list *tag);
void	ft_width(char **format, va_list ap, t_list *tag);
void	ft_precision(char **format, va_list ap, t_list *tag);

int		ft_strchr_opt(char ch, char *str);
int		ft_isnum(char **format);

int		ft_print_d(t_list *tag, va_list ap);

#endif
