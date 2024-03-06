/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:23:28 by armolina          #+#    #+#             */
/*   Updated: 2024/03/06 08:37:01 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	find_digit(int n, int div)
{
	int	digit;

	digit = n / div;
	if (digit < 0)
		digit = digit * -1;
	return ((unsigned int)digit);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		div;
	char	digit;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	div = 1000000000;
	if (n < 0)
		write(fd, "-", 1);
	while ((n / div) == 0)
		div = div / 10;
	while (div != 1 && n != 0)
	{
		digit = '0' + find_digit(n, div);
		write(fd, &digit, 1);
		n = n % div;
		div = div / 10;
	}
	digit = '0' + find_digit(n, div);
	write(fd, &digit, 1);
}
// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-21473648, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(73648, 1);
// }

// void	ft_putnbr_fd(int n, int fd) // NO PASA EL PACO
// {
// 	char	*str;

// 	str = ft_itoa(n);
// 	ft_putstr_fd(str, fd);
// 	free(str);
// }
