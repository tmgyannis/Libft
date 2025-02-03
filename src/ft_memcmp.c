#include <stdio.h>
#include <stddef.h>

// Prototype de ft_memcmp
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    printf("memcmp(\"hello\", \"hello\", 5) : %d\n", ft_memcmp("hello", "hello", 5)); // 0
    printf("memcmp(\"hello\", \"hella\", 5) : %d\n", ft_memcmp("hello", "hella", 5)); // > 0
    printf("memcmp(\"abc\", \"xyz\", 3) : %d\n", ft_memcmp("abc", "xyz", 3)); // < 0
    printf("memcmp(\"hell\", \"hello\", 4) : %d\n", ft_memcmp("hell", "hello", 4)); // 0
    printf("memcmp(\"hello\", \"hellz\", 5) : %d\n", ft_memcmp("hello", "hellz", 5)); // < 0

    return 0;
}

// Implémentation correcte de ft_memcmp
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    while (i < n)
    {
        if (p1[i] != p2[i])
            return ((int)(p1[i] - p2[i])); // Assure que la différence est bien interprétée
        i++;
    }
    return 0;
}
