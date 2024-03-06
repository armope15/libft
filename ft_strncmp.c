/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:21:36 by armolina          #+#    #+#             */
/*   Updated: 2024/02/27 16:05:42 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
			return ((int)(unsigned char)str1[i] - (int)(unsigned char )str2[i]);
		i++;
	}
	return (0);
}
