/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 23:06:34 by angelo            #+#    #+#             */
/*   Updated: 2022/07/08 22:07:52 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	char caracter = 'l';
	char string[] = "ok string";

	ft_printf("%%c Prints a single character. %c\n", caracter);
	ft_printf("%%s Prints a string (as defined by the common C convention). %s", string);
	return (0);
}

//cc -Wall -Wextra -Werror main_teste.c ./libftprintf.a && ./a.out
