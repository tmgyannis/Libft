#include <stdio.h>

// Déclaration de la fonction ft_isdigit
int ft_isdigit(int c);

int main(void)
{
    printf("Test avec '1': %d\n", ft_isdigit('1')); // Doit retourner 1
    printf("Test avec '2': %d\n", ft_isdigit('2')); // Doit retourner 1
    printf("Test avec 'a': %d\n", ft_isdigit('a')); // Doit retourner 0
    printf("Test avec 'A': %d\n", ft_isdigit('A')); // Doit retourner 0
    return (0);
}

// Définition de la fonction ft_isdigit
int ft_isdigit(int c)
{
    if ((c >= '1' && c <= '9'))
        return (1);
    return (0);
}
