/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:04:21 by angelo            #+#    #+#             */
/*   Updated: 2022/06/18 15:21:02 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = 0;
	len = ft_strlen(s1);
	while (start < len && ft_strchr(set, s1[start]))
		start++;
	while (start < len && ft_strchr(set, s1[len]))
		len--;
	str = ft_substr(s1, start, (len - start) + 1);
	return (str);
}
