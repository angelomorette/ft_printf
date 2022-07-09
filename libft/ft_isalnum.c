/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:28:47 by amorette          #+#    #+#             */
/*   Updated: 2022/06/23 19:37:22 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || \
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = '8';
	printf("isalnum: \t%d\n", isalnum(c));
	printf("ft_isalnum: \t%d\n", ft_isalnum(c));
	return (0);
} */
/* Call it:
* gcc -Wall -Wextra -Werror ft_isalnum.c && ./a.out */
