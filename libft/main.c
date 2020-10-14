/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:34:58 by jtoty             #+#    #+#             */
/*   Updated: 2020/10/14 21:10:22 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char	*s1 = "A";

	char *i1 = strnstr(s1, s1, 2);
	char *i2 = ft_strnstr("", "abc", 2);

	printf("%s\n", i1);
	printf("%s\n", i2);
}
