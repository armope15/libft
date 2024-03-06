/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:46:54 by armolina          #+#    #+#             */
/*   Updated: 2024/02/27 16:46:54 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char	*p;

	p = str;
	while (*p != '\0')
	{
		if (*p == (unsigned char)c)
		{
			return ((char *)p);
		}
		p++;
	}
	if (*p == '\0' && (unsigned char)c == '\0')
	{
		return ((char *)p);
	}
	return (NULL);
}
