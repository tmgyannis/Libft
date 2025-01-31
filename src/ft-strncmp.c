#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
    printf("Comparaison 'hello' et 'hello' (5) : %d\n", ft_strncmp("hello", "hello", 5)); // 0
    printf("Comparaison 'hello' et 'world' (5) : %d\n", ft_strncmp("hello", "world", 5)); // < 0
    printf("Comparaison 'world' et 'hello' (5) : %d\n", ft_strncmp("world", "hello", 5)); // > 0
    printf("Comparaison 'hello' et 'hella' (5) : %d\n", ft_strncmp("hello", "hella", 5)); // > 0
    printf("Comparaison 'hello' et 'hella' (4) : %d\n", ft_strncmp("hello", "hella", 4)); // 0
    printf("Comparaison 'hell' et 'hello' (5) : %d\n", ft_strncmp("hell", "hello", 5)); // < 0

    return 0;
}

 int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }

    if (i < n) // Vérification si une des deux chaînes est terminée
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);

    return 0;
}
