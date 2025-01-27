// # **********************#
// #                       #
// #                       #
// #    ft-isalpha.c       #
// #                       #
// #    By: yannis         #
// #                       #
// #    Created: 23/01/25  #
// #                       #
// #                       #
// # **********************#

#include <stdio.h>


// Déclaration de la fonction ft_isalpha
int ft_isalpha(int c);

int main(void)
{
    printf("Test avec 'A': %d\n", ft_isalpha('A')); // Doit retourner 1
    printf("Test avec 'z': %d\n", ft_isalpha('z')); // Doit retourner 1
    printf("Test avec '1': %d\n", ft_isalpha('1')); // Doit retourner 0
    printf("Test avec '@': %d\n", ft_isalpha('@')); // Doit retourner 0
    return (0);
}

// Définition de la fonction ft_isalpha
int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}
