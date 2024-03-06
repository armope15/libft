/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:37:08 by armolina          #+#    #+#             */
/*   Updated: 2024/03/06 05:55:10 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_digits(int c)
{
	int	i;

	i = 0;
	if (c < 0)
		i = 1;
	while (c)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

unsigned int	ft_last_char(int n)
{
	int	d;

	d = n % 10;
	if (d < 0)
	{
		d = d * -1;
	}
	return (d + '0');
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = num_digits(n);
	str = malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[digits] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (--digits >= 0)
	{
		str[digits] = ft_last_char(n);
		if (digits == 0 && str[digits] == '0')
			str[0] = '-';
		n = n / 10;
	}
	return (str);
}
// int main(void)
// {
// 	printf("%s \n" , ft_itoa(-2147483648));
// 	printf("%s \n" , ft_itoa(2147483647));
// 	printf("%s \n" , ft_itoa(648));
// 	printf("%s \n" , ft_itoa(-214748));
// 	printf("%s \n" , ft_itoa(0));
// 	printf("%s \n" , ft_itoa(-214747));
// 	printf("%s \n" , ft_itoa(-214748));
// 	printf("%s \n" , ft_itoa(8));
// 	printf("%s \n" , ft_itoa(-8));
// }