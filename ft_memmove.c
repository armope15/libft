/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:07:55 by armolina          #+#    #+#             */
/*   Updated: 2024/02/27 16:44:34 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t length)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (d < s || d > s + length)
	{
		while (length--)
		{
			*d++ = *s++;
		}
	}
	else if (d != s)
	{
		while (length--)
		{
			d[length] = s[length];
		}
	}
	return (dst);
}
