#include <stddef.h>  // Para el tipo size_t

char *ft_strncpy(char *dest, const char *src, size_t n) {
    size_t i;

    // Copiar hasta n caracteres de src a dest
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // Si src tiene menos de n caracteres, llenar el resto de dest con '\0'
    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}