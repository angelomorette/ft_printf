/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:31:04 by amorette          #+#    #+#             */
/*   Updated: 2022/07/09 18:37:14 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

static int ft_choose(va_list args, char caracterCheck)
{
	int caracterNumbers;

	caracterNumbers = 0;
	if (caracterCheck == 'c')
		caracterNumbers += ft_putchar(va_arg(args, int));
	if (caracterCheck == '%')
		caracterNumbers += ft_putchar('%');
	return (caracterNumbers);
}

int ft_printf(const char *value, ...)
{
	int i;
	int caracterNumbers;

	i = 0;
	caracterNumbers = 0;
	va_list list;
	va_start(list, value);
	while (value[i])
	{
		if (value[i] == '%' && ft_strchr("cspdiuxX%", value[i + 1]))
			caracterNumbers += ft_choose(list, value[i + 1]);
		else
			caracterNumbers += ft_putchar(value[i]);
		i++;
	}

	va_end(list);

	return (caracterNumbers);
}
