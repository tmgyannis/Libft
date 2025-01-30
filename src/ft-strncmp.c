#include <stdio.h>

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
