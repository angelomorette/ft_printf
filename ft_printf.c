/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:31:04 by amorette          #+#    #+#             */
/*   Updated: 2022/07/08 22:06:59 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

void ft_choose(va_list *args, char caracterCheck)
{
	if (caracterCheck == 'c')
		ft_putchar_fd(va_arg(*args, int), 1);
	if (caracterCheck == 's')
		ft_putstr_fd(va_arg(*args, char *), 1);
	if (caracterCheck == '%')
		ft_putchar_fd('%', 1);
}

int ft_printf(const char *value, ...)
{
	int i;
	int result;
	int arg;

	i = 0;
	result = 0;
	arg = 0;
	va_list list;
	va_start(list, value);
	while (value[i])
	{
		if (value[i] == '%')
		{
			arg++;
			ft_choose(&list, value[++i]);
		}
		else
			ft_putchar_fd(value[i], 1);
		i++;
	}

	result = ft_strlen(value) - arg;

	va_end(list);

	//checando a quantidades de caracteres
	printf("\n result = %d arguments", result, arg);
	return (result);
}
