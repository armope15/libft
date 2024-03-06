/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:37:22 by armolina          #+#    #+#             */
/*   Updated: 2024/02/27 16:43:54 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	unsigned char		i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = (unsigned char)n;
	while (i && *str1 == *str2)
	{
		str1++;
		str2++;
		i--;
	}
	if (i == 0)
		return (0);
	return ((int)(*str1 - *str2));
}
