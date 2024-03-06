/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 22:07:47 by armolina          #+#    #+#             */
/*   Updated: 2024/02/28 07:55:53 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*p;
	int		i;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	p = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < (int)l1)
	{
		p[i] = s1[i];
		i++;
	}
	while (i < (int)(l1 + l2))
	{
		p[i] = s2[i - l1];
		i++;
	}
	p[i] = '\0';
	return ((char *)p);
}

// int main(void)
// {
// 	char s1[]="";
// 	char s2[]="";
// 	char *s3;
// 	s3 = ft_strjoin(s1 , s2);
// 	printf("%s\n", s3 );
// }