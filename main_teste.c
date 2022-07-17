/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 23:06:34 by angelo            #+#    #+#             */
/*   Updated: 2022/07/17 17:33:05 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	letter;
	char	*string;
	char	string2[10];

	letter = 'c';
	string = "Hello World";
	ft_printf("-----------Prints a single character.------------\n");
	ft_printf("%c\n", letter);
	ft_printf("-----------Prints a percent sign.------------\n");
	ft_printf("%%\n");
	ft_printf("-----------Prints a string.------------\n");
	ft_printf("%s\n", string);
	ft_printf("%s\n", string2);
	printf("%s\n", string2);
	ft_printf("-----------Pointer argument-----------\n");
	ft_printf("ft_printf %p\n", string);
	printf ("printf\t  %p\n", string);
	ft_printf("-----------Int e Decimal-----------\n");
	ft_printf("int %i\n", -101);
	ft_printf("decimal %d\n", 390);
	ft_printf("-----------Unsigned decimal-----------\n");
	ft_printf("%u\n", 1);
	printf("%u\n", 1);
	ft_printf("%u\n", -1);
	printf("%u\n", -1);
	ft_printf("-----------hexadecimal lowercase uppercase----------\n");
	ft_printf("%x\n", 10);
	ft_printf("%X\n", 10);
	return (0);
}

//cc -Wall -Wextra -Werror main_teste.c ./libftprintf.a && ./a.out
