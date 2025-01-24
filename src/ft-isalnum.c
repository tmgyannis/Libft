#include <stdio.h>

int ft_isalnum(int c);

int main(void)
{
    printf("test avec 'A' : %d\n", ft_isalnum('A')); // Doit afficher 1)
    printf("test avec 'z' : %d\n", ft_isalnum('z')); // Doit afficher 1)
    printf("test avec '5' : %d\n", ft_isalnum('5')); // Doit afficher 1)
    printf("test avec '@' : %d\n", ft_isalnum('@')); // Doit afficher 0)
    printf("test avec ' ' : %d\n", ft_isalnum(' ')); // Doit afficher 0)
    return (0);
}

// Définition de la fonction ft_isalnum
int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '1' && c <= '9'))
        return (1);
    return (0);
}
