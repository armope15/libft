/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:49:04 by armolina          #+#    #+#             */
/*   Updated: 2024/03/06 08:49:20 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		start;
	size_t		total;
	const char	*s;

	if ((!dst || !src) && !dstsize)
		return (0);
	s = src;
	start = 0;
	while (*(dst + start) && start < dstsize)
		start++;
	if (start < dstsize)
		total = start + ft_strlen(s);
	else
		return (dstsize + ft_strlen(s));
	while (*s && (start + 1) < dstsize)
	{
		*(dst + start) = *s++;
		start++;
	}
	*(dst + start) = '\0';
	return (total);
}

// size_t	len_dst;
// size_t	len_src;
// size_t	p;

// len_dst = ft_strlen(dst);
// len_src = ft_strlen(src);
// if (dstsize <= len_dst)
// {
// 	return (dstsize + len_src);
// }
// len_src = ft_strlen(src);
// p = len_dst;
// while (src && (p < dstsize - 1))
// {
// 	dst[p] = *src;
// 	p++;
// 	src++;
// }
// dst[p] = '\0';
// return (len_src + len_dst);
// }