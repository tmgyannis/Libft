#include <stdio.h>

// Prototype correct
void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
    char str[] = "abcdef";

    // Tests normaux
    printf("Recherche 'c' dans \"abcdef\" : %s\n", (char *)ft_memchr(str, 'c', 6)); // cdef
    printf("Recherche 'f' dans \"abcdef\" : %s\n", (char *)ft_memchr(str, 'f', 6)); // f
    printf("Recherche 'z' dans \"abcdef\" : %s\n", ft_memchr(str, 'z', 6) ? "Trouvé" : "(null)"); // (null)
    
    // Limite de `n`
    printf("Recherche 'c' dans \"abcdef\" avec n=2 : %s\n", ft_memchr(str, 'c', 2) ? "Trouvé" : "(null)"); // (null)

    return 0;
}

// Implémentation correcte de ft_memchr
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    size_t i = 0;

    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return ((void *)(ptr + i));
        i++;
    }
    return (NULL);
}
