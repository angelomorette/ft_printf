/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:31:04 by amorette          #+#    #+#             */
/*   Updated: 2022/07/16 18:53:15 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	len;

	len = write(1, &c, 1);
	return (len);
}

static int ft_check_character(va_list *ptr, char c)
{
	int len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(*ptr, int));
	if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int ft_printf(const char *string, ...)
{
	int i;
	int len;

	i = 0;
	len = 0;
	va_list ptr;
	va_start(ptr, string);
	while (string[i])
	{
		if (string[i] != '%')
			len += ft_putchar(string[i]);
		if (string[i] == '%')
			len += ft_check_character(&ptr, string[++i]);
		i++;
	}
	va_end(ptr);
	return (len);
}
