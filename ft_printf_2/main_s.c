/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:52:31 by hwalee            #+#    #+#             */
/*   Updated: 2020/11/16 18:00:58 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i1;
	int i2;

	char c = 'a';
	printf("%d", printf("%9c\n%-9c\n", c, 'a'));
	printf("%d", ft_printf("%9c\n%-9c\n", c, 'a'));
}
