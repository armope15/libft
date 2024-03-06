/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:14:32 by armolina          #+#    #+#             */
/*   Updated: 2024/03/05 23:15:29 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

static int	ft_overflow(int d, char c, int s)
{
	long	number;

	number = ((long)d * 10) + ((c - '0') * s);
	if (number <= 2147483647 && number >= -2147483648)
	{
		return ((int)number);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+' && sign == 1)
		str++;
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		number = ft_overflow(number, *str, sign);
		if (number == 0)
			return (-1);
		str++;
	}
	return (number);
}
