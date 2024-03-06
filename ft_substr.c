/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:55:58 by armolina          #+#    #+#             */
/*   Updated: 2024/02/27 22:06:13 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	char	*p;
	int		i;

	i = 0;
	l = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > l)
		return (ft_strdup(""));
	if ((start + len) > l)
		len = l - start;
	p = (char *)(malloc((len + 1) * sizeof(char)));
	if (p)
	{
		while (i < (int)len)
		{
			p[i] = s[start + i];
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}

// int main(void){
// 	printf("%s\n", ft_substr("1234567890" , 5 , 2));
// 	printf("%s\n", ft_substr("" , 5 , 2));
// 	printf("%s\n", ft_substr("1234567890" , 1 , 2));
// 	// printf("%s\n", ft_substr("1234567890" , 5 , 2));
// 	// printf("%s\n", ft_substr("1234567890" , 5 , 2));
// 	// printf("%s\n", ft_substr("1234567890" , 5 , 2));

// }