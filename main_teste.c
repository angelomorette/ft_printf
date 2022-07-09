/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 23:06:34 by angelo            #+#    #+#             */
/*   Updated: 2022/07/09 18:31:19 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	char caracter = '0';
	int caracterNumbers;

	caracterNumbers = 0;
	caracterNumbers = ft_printf("%c\n", caracter);

	printf("###### dados da função ft_printf: ######\n");
	printf("caracter number %i\n", caracterNumbers);

	printf("######  checando com printf ######\n");
	printf("caracter number %i\n", printf("%s", "%c Prints a single character. 0\n"));
	return (0);
}

//cc -Wall -Wextra -Werror main_teste.c ./libftprintf.a && ./a.out
