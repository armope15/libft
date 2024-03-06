/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:38:13 by marvin            #+#    #+#             */
/*   Updated: 2024/03/05 19:26:47 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str2[0] == '\0')
		return ((char *) str1);
	while (str1[i] != '\0' && i < len)
	{
		j = 0;
		while (str1[i + j] == str2[j] && i + j < len)
		{
			if (str2[j + 1] == '\0')
				return ((char *) &str1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

//  int	main(void)
//  {
// 	char *a;
//  	a = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
// 	printf("\n%c\n",*a);
//  	a = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
// 	printf("\n%c\n",*a);
//  	a = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 35);
// 	printf("\n%c\n",*a);
//  	a = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30);
// 	printf("\n%c\n",*a);
//  	a = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
// 	printf("\n%c\n",*a);
//  }
