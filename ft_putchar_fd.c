/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina <armolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:22:54 by armolina          #+#    #+#             */
/*   Updated: 2024/03/06 07:24:41 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int	main(void)
// {
// 	int i = 0;
// 	while (i <= 99)
// 	{
// 		ft_putchar_fd((i/10)+'0', 2);
// 		ft_putchar_fd((i%10)+'0', 2);
// 		ft_putchar_fd(' ', 2);
// 		ft_putchar_fd(':', 2);
// 		ft_putchar_fd(' ', 2);
// 		ft_putchar_fd(i, 2);
// 		ft_putchar_fd('\n', 2);
// 		i++;
// 	}
// }
// Para que pasen todos los test, char c puede ser 0
// 0: Standard input (stdin)
// 1: Standard output (stdout)
// 2: Standard error (stderr)
// Additional file descriptors can be opened for files or other output streams.