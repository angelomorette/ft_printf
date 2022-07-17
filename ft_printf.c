/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:31:04 by amorette          #+#    #+#             */
/*   Updated: 2022/07/17 17:30:01 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_character(va_list *ptr, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(*ptr, int));
	if (c == 's')
		len += ft_print_string(va_arg(*ptr, char *));
	if (c == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_print_pointer(va_arg(*ptr, unsigned long long));
	}
	if (c == 'd' || c == 'i')
		len += ft_print_int_decimal(va_arg(*ptr, int));
	if (c == 'u')
		len += ft_print_unsigned_decimal(va_arg(*ptr, unsigned int));
	if (c == 'x' || c == 'X')
		len += ft_print_hex(va_arg(*ptr, unsigned int), c);
	if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *string, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	i = 0;
	len = 0;
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
