/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:36:04 by amorette          #+#    #+#             */
/*   Updated: 2022/07/17 17:28:01 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *string, ...);
int	ft_print_string(char *string);
int	ft_print_pointer(unsigned long long num);
int	ft_print_int_decimal(int num);
int	ft_print_unsigned_decimal(unsigned int num);
int	ft_print_hex(unsigned int num, char c);
int	ft_putchar(char c);

#endif
