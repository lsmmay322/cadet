/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:32:27 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/05 16:40:14 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char *line = "hello world!";
	char *dupstr = NULL;

	dupstr = ft_strdup(line);
	printf("%s\n", dupstr);
	free(dupstr);
}
