#include <stdio.h>
#include <string.h>

// Déclaration de la fonction ft_memset
void *ft_memset(void *b, int c, size_t len);

int main(void)
{
    char str[11] = "HelloWorld"; // Tableau de 10 caractères + '\0'

    // Utilisation de ft_memset pour remplir les 5 premiers caractères avec '@'
    ft_memset(str, '@', 6);

    printf("Résultat : %s\n", str); // Résultat attendu : @@@@@@orld

    return 0;
}

// Définition de la fonction ft_memset
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unsigned char *)b;

    while (len > 0)
    {
        *ptr = (unsigned char)c; // Remplit l'octet courant avec la valeur
        ptr++;
        len--;
    }

    return (b); // Retourne le pointeur initial
}
