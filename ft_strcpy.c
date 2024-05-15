char *ft_strcpy(char *dest, const char *src) {
    char *dest_ptr = dest;

    // Copiar cada carácter de src a dest, incluyendo el carácter nulo de terminación
    while ((*dest_ptr++ = *src++) != '\0')
        ;

    return dest;
}
