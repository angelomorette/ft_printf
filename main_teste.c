/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 23:06:34 by angelo            #+#    #+#             */
/*   Updated: 2022/07/16 18:57:29 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	char letter = 'c';
	ft_printf("-----------Prints a single character.------------\n");
	ft_printf("%c\n", letter);
	ft_printf("-----------Prints a percent sign.------------\n");
	ft_printf("%%\n", letter);

	return (0);
}

//cc -Wall -Wextra -Werror main_teste.c ./libftprintf.a && ./a.out
