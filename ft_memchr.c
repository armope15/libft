/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:11:32 by marvin            #+#    #+#             */
/*   Updated: 2024/02/27 16:34:23 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t l)
{
	unsigned char	*b;
	unsigned char	h;

	b = (unsigned char *)s;
	h = (unsigned char)c;
	while (l--)
	{
		if (*b == h)
			return (b);
		b++;
	}
	return (NULL);
}

// int main(void){
// 	char *j;
// 	j = "fgfy";
// 	ft_memchr((void *)j, 'f', 3);
// }
