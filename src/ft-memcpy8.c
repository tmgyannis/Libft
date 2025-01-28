#include <stdio.h>
#include <string.h>

int main(void)
{
 char src[] = "HelloWorld";
    char dest[20];

memcpy(dest, src, 10);

    printf("Source : %s\n", src);
    printf("Destination après ft_memcpy : %s\n", dest);

memcpy(dest, src, 0);
    printf("Destination après ft_memcpy avec n == 0 : %s\n", dest);

    return 0;
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (!dest && !src) // Gestion des cas où les pointeurs sont NULL
        return (NULL);

    while (n > 0)
    {
        *d = *s; // Copie l'octet de source à destination
        d++;
        s++;
        n--;
    }

    return (dest); // Retourne l'adresse de destination
}
