#include <stdio.h>

char *ft_strchr(const char *s, int c);

int main(void)

{

    char str[] = "good, boy!";
    
    printf("Recherche 'o' : %s\n", ft_strchr(str, 'o')); // ood, boy!
    printf("Recherche 'b' : %s\n", ft_strchr(str, 'b')); // boy!
    printf("Recherche 'z' : %s\n", ft_strchr(str, 'z')); // z!
    printf("Recherche '\\0' : %s\n", ft_strchr(str, '\0')); // ""

    return 0;

}

char *ft_strchr(const char *s, int c)

{

    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }

    if (c == '\0')
        return ((char *)s);

    return (NULL);

}
