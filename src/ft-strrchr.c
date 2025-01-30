#include <stdio.h>

char *ft_strrchr(const char *s, int c);

int main(void)
{
    char str[] = "good, boy!";
    
    printf("Recherche 'o' : %s\n", ft_strrchr(str, 'o')); // o, boy!
    printf("Recherche 'b' : %s\n", ft_strrchr(str, 'b')); // boy!
    printf("Recherche 'z' : %s\n", ft_strrchr(str, 'z') ? ft_strrchr(str, 'z') : "(null)"); // NULL
    printf("Recherche '\\0' : %s\n", ft_strrchr(str, '\0')); // ""

    return 0;
}

char *ft_strrchr(const char *s, int c)
{
    char *last_occurrence = NULL; // Déclaration correcte

    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = (char *)s; // Mise à jour de la dernière occurrence trouvée
        s++;
    }

    if (c == '\0')
        return ((char *)s);

    return (last_occurrence);
}
