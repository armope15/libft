/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:19:13 by armolina          #+#    #+#             */
/*   Updated: 2024/02/27 16:44:15 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		counter;
	const char	*ptr_src;
	char		*ptr_dst;

	if (!dst && !src)
		return (0);
	counter = 0;
	ptr_src = src;
	ptr_dst = dst;
	while (counter < n)
	{
		ptr_dst[counter] = ptr_src[counter];
		counter++;
	}
	return (dst);
}
