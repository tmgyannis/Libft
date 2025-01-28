#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (!dest && !src) // Si les deux pointeurs sont NULL, on retourne NULL
        return (NULL);

    if (d > s && d < s + len) // Chevauchement arrière
    {
        d += len;
        s += len;
        while (len > 0)
        {
            d--;
            s--;
            *d = *s;
            len--;
        }
    }
    else // Copie normale (comme memcpy)
    {
        while (len > 0)
        {
            *d = *s;
            d++;
            s++;
            len--;
        }
    }

    return (dest);
}

int main(void)
{
    char str1[20] = "HelloWorld";
    char str2[20] = "OverlapTest";

    // Cas sans chevauchement
    ft_memmove(str2, str1, 10);
    printf("Test 1 - Sans chevauchement : %s\n", str2); // Doit afficher "HelloWorld"

    // Cas avec chevauchement (avant vers arrière)
    char str3[] = "Overlapping";
    ft_memmove(str3 + 4, str3, 5);
    printf("Test 2 - Chevauchement avant : %s\n", str3); // Doit afficher "OverOvering"

    // Cas avec chevauchement (arrière vers avant)
    char str4[] = "Overlapping";
    ft_memmove(str4, str4 + 4, 5);
    printf("Test 3 - Chevauchement arrière : %s\n", str4); // Doit afficher "ppingping"

    return 0;
}