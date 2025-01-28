#include <stdio.h>
#include <string.h>

void*	ft_bzero(void *b, size_t len)
{
    unsigned char *ptr = (unsigned char *)b;

    while (len > 0)
    {
        *ptr = (unsigned char)0; // Remplit l'octet courant avec la valeur
        ptr++;
        len--;
    }

    return (b); // Retourne le pointeur initial
}

int main(void)
{
    char str[11] = "HelloWorld"; // Tableau de 10 caractères + '\0'

    // Avant bzero
    printf("Avant ft_bzero : %s\n", str);

    // Utilisation de ft_bzero pour mettre les 5 premiers caractères à 0
    ft_bzero(str, 5);

    // Après bzero
    printf("Après ft_bzero : %s\n", str); // Les premiers caractères seront invisibles

    // Afficher chaque caractère individuellement
    for (int i = 0; i < 10; i++)
        printf("str[%d] = %c (%d)\n", i, str[i], str[i]);

    return 0;
}
