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
	int i = 'a';
	char *ch = "Acc";

 	printf("Hello World!\n");
	printf("1. %d %d\n", i, 1245);
	printf("2. % d %d\n", i, 1245);
	printf("3. % d %d\n", -i, 1245);
	printf("4. % d %d\n", 0, 1245);
	printf("5. % +d %d\n", i, 1245);
	printf("6. % +d %d\n", -i, 1245);
	printf("7. % +d %d\n", i, 1245);
	printf("8. % +d %d\n", -i, 1245);
	printf("9. % +0d %d\n", i, 1245);
	printf("10. % +0d %d\n", -i, 1245);
	printf("11. % +07d %d\n", i, 1245);
	printf("12. % +07d %d\n", -i, 1245);
	printf("13. % +0.4d %d\n", i, 1245);
	printf("14. % +0.4d %d\n", -i, 1245);
	printf("15. % +07.4d %d\n", i, 1245);
	printf("16. % +07.4d %d\n", -i, 1245);
	printf("17. % +04.7d %d\n", i, 1245);
	printf("18. % +04.7d %d\n", -i, 1245);
	printf("19. % +-04.7d %d\n", i, 1245);
	printf("20. % +-04.7d %d\n", -i, 1245);
	printf("21. % -+d %d\n", i, 1245);
	printf("22. % -+d %d\n", -i, 1245);
	printf("23. % -+07d %d\n", i, 1245);
	printf("24. % -+07d %d\n", -i, 1245);
	printf("23. % -+07d %d\n", i, 1245);
	printf("24. % -+07d %d\n", -i, 1245);
	printf("15. % +0*.*d %d\n", 7, 4, i, 1245);
	printf("16. % +0*.*d %d\n", 7, 4, -i, 1245);
	printf("17. % +0*.*d %d\n", 4, 7, i, 1245);
	printf("18. % +0*.*d %d\n", 4, 7, -i, 1245);
	printf("19. % +-0*.*d %d\n", 4, 7, i, 1245);
	printf("20. % +-0*.*d %d\n", 4, 7, -i, 1245);
	printf("19. % +-0*.*d %d\n", 7, 4, i, 1245);
	printf("20. % +-0*.*d %d\n", 7, 4, -i, 1245);
	printf("19. % +-0*.*d %d\n", 7, 7, i, 1245);
	printf("20. % +-0*.*d %d\n", 7, 7, -i, 1245);
	printf("19. %*.*d %d\n", 7, 7, i, 1245);
	printf("20. %*.*d %d\n", 7, 7, -i, 1245);
	printf("19. %*.*d %dsd12\n", 7, 7, i, 1245);
	printf("20. %*.*d %dsd12\n", 7, 7, -i, 1245);


    printf("-------------------------------------\n");

 	ft_printf("Hello World!\n");
	ft_printf("1. %d %d\n", i, 1245);
	ft_printf("2. % d %d\n", i, 1245);
	ft_printf("3. % d %d\n", -i, 1245);
	ft_printf("4. % d %d\n", 0, 1245);
	ft_printf("5. % +d %d\n", i, 1245);
	ft_printf("6. % +d %d\n", -i, 1245);
	ft_printf("7. % +d %d\n", i, 1245);
	ft_printf("8. % +d %d\n", -i, 1245);
	ft_printf("9. % +0d %d\n", i, 1245);
	ft_printf("10. % +0d %d\n", -i, 1245);
	ft_printf("11. % +07d %d\n", i, 1245);
	ft_printf("12. % +07d %d\n", -i, 1245);
	ft_printf("13. % +0.4d %d\n", i, 1245);
	ft_printf("14. % +0.4d %d\n", -i, 1245);
	ft_printf("15. % +07.4d %d\n", i, 1245);
	ft_printf("16. % +07.4d %d\n", -i, 1245);
	ft_printf("17. % +04.7d %d\n", i, 1245);
	ft_printf("18. % +04.7d %d\n", -i, 1245);
	ft_printf("19. % -+04.7d %d\n", i, 1245);
	ft_printf("20. % -+04.7d %d\n", -i, 1245);
	ft_printf("21. % -+d %d\n", i, 1245);
	ft_printf("22. % -+d %d\n", -i, 1245);
	ft_printf("23. % -+07d %d\n", i, 1245);
	ft_printf("24. % -+07d %d\n", -i, 1245);
	ft_printf("23. % -+07d %d\n", i, 1245);
	ft_printf("24. % -+07d %d\n", -i, 1245);
	ft_printf("15. % +0*.*d %d\n", 7, 4, i, 1245);
	ft_printf("16. % +0*.*d %d\n", 7, 4, -i, 1245);
	ft_printf("17. % +0*.*d %d\n", 4, 7, i, 1245);
	ft_printf("18. % +0*.*d %d\n", 4, 7, -i, 1245);
	ft_printf("19. % +-0*.*d %d\n", 4, 7, i, 1245);
	ft_printf("20. % +-0*.*d %d\n", 4, 7, -i, 1245);
	ft_printf("19. % +-0*.*d %d\n", 7, 4, i, 1245);
	ft_printf("20. % +-0*.*d %d\n", 7, 4, -i, 1245);
	ft_printf("19. % +-0*.*d %d\n", 7, 7, i, 1245);
	ft_printf("20. % +-0*.*d %d\n", 7, 7, -i, 1245);
	ft_printf("19. %*.*d %d\n", 7, 7, i, 1245);
	ft_printf("20. %*.*d %d\n", 7, 7, -i, 1245);
	ft_printf("19. %*.*d %dsd12\n", 7, 7, i, 1245);
	ft_printf("20. %*.*d %dsd12\n", 7, 7, -i, 1245);
}
