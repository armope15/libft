/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:05:25 by armolina          #+#    #+#             */
/*   Updated: 2024/03/05 20:05:18 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	int		ini;
	int		end;

	ini = 0;
	l = ft_strlen(s1);
	end = l - 1;
	while (ini < (int)l && ft_in_set(s1[ini], set))
	{
		ini++;
	}
	while (end >= 0 && ft_in_set(s1[end], set))
	{
		end--;
	}
	if (ini > end)
		return (ft_strdup(""));
	return (ft_substr(s1, ini, end + 1 - ini));
}
