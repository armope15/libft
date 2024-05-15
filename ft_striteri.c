/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:24:19 by armolina          #+#    #+#             */
/*   Updated: 2024/03/06 11:31:50 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void print_index_and_char(unsigned int index, char *c)
// {
// 	printf("Index: %u, Character: %c\n", index, *c);
// }

// int main()
// {
// 	char str[] = "Hello, World!";

// 	printf("Original string: %s\n", str);

// 	ft_striteri(str, &print_index_and_char);

// 	return 0;
// }