/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:44:05 by armolina          #+#    #+#             */
/*   Updated: 2024/02/27 22:06:03 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*p;

	len = ft_strlen(str) + 1;
	p = malloc(len * sizeof(char));
	if (p)
	{
		ft_strlcpy(p, str, len);
		return (p);
	}
	return (NULL);
}
