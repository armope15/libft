/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armolina < armolina@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:22:20 by armolina          #+#    #+#             */
/*   Updated: 2024/05/15 10:22:21 by armolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, const char *src) {
    char *dest_ptr = dest;

    // Avanzar dest_ptr hasta el final de la cadena dest
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    // Copiar cada carácter de src a dest_ptr, incluyendo el carácter nulo de terminación
    while ((*dest_ptr++ = *src++) != '\0')
        ;

    return dest;
}
