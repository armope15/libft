/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:46:33 by armolina          #+#    #+#             */
/*   Updated: 2024/03/06 09:14:34 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**list_free(char **str, int n)
{
	while (n > 0)
	{
		n--;
		free(str[n]);
	}
	free(str);
	return (NULL);
}

static size_t	count_words(const char *s, char c)
{
	size_t	counter;
	int		w;

	counter = 0;
	w = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (w == 0)
		{
			if (*s != c)
			{
				counter++;
				w = 1;
			}
		}
		else
		{
			if (*s == c)
				w = 0;
		}
		s++;
	}
	return (counter);
}

static size_t	len(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != c && s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		pos;
	int		words;

	pos = 0;
	words = count_words(s, c);
	list = malloc((words + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	while (pos < words)
	{
		while (*s == c)
			s++;
		list[pos] = (char *)malloc((len(s, c) + 1) * sizeof(char));
		if (!list[pos])
		{
			list_free(list, pos);
			return (NULL);
		}
		ft_strlcpy(list[pos], s, len(s, c) + 1);
		s = s + len(s, c) + 1;
		pos++;
	}
	list[pos] = NULL;
	return (list);
}

// char **ft_split(char const *s, char c);
// int	main(void)
// {
// 	char **list;
// 	char	str[] = "    Separar las palabras de    esta linea ";
// 	printf("%d\n", (int)count_words(str, ' '));

// 	int i=0;
// 	list = ft_split(str , ' ');
// 		while (*list != NULL) {
//         printf("%s\n", *list);
//         list++;
//     }
// //			printf("%d : %s\n" , pos , s);

// }
