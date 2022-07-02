/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:31:04 by amorette          #+#    #+#             */
/*   Updated: 2022/07/02 16:17:42 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "lbft/ibft.h"

int ft_printf(const char *value, ...)
{
	int len;

	len = 0;
	
	//crio a lista de argumentos
	va_list list;
	//coloco o valor dentro da lista
	va_start(list, value);

	len = ft_strlen(value);

	
	va_end(list);
	printf(len);
	return (len);
}

int main(void)
{
	ft_printf("parte teste");
	return (0);
}
