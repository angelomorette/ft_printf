/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:11:59 by angelo            #+#    #+#             */
/*   Updated: 2022/07/17 17:30:53 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *string)
{
	int	len;

	len = 0;
	if (!string)
		string = "(null)";
	while (*string)
		len += write(1, string++, 1);
	return (len);
}

int	ft_print_pointer(unsigned long long num)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_print_pointer(num / 16);
		len += ft_print_pointer(num % 16);
	}
	if (num < 16)
	{
		if (num < 10)
			len += ft_putchar(num + 48);
		else
			len += ft_putchar(num + 87);
	}
	return (len);
}

int	ft_print_int_decimal(int num)
{
	int			len;
	long long	n;

	n = num;
	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		len += ft_print_int_decimal(n / 10);
		len += ft_print_int_decimal(n % 10);
	}
	if (n < 10)
		len += ft_putchar(n + 48);
	return (len);
}

int	ft_print_unsigned_decimal(unsigned int num)
{
	int	len;

	len = 0;
	if (num >= 10)
	{
		len += ft_print_unsigned_decimal(num / 10);
		len += ft_print_unsigned_decimal(num % 10);
	}
	if (num < 10)
		len += ft_putchar(num + 48);
	return (len);
}

int	ft_print_hex(unsigned int num, char check)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_print_hex(num / 16, check);
		len += ft_print_hex(num % 16, check);
	}
	if (num < 16)
	{
		if (num < 10)
			len += ft_putchar(num + '0');
		else
		{
			if (check == 'X')
				len += ft_putchar(num - 10 + 'A');
			else
				len += ft_putchar(num - 10 + 'a');
		}
	}
	return (len);
}
