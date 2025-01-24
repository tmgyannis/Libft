#include <ctype.h>
#include <stdio.h>

// Définition de isprint
int ft_isprint(char* c)
{
    if ((c >= "32" && c <= "126"))
        return (1);
    return (0);

}
int main() {

    char c1 = 'A';  // Imprimable
    char c2 = '\n'; // Non imprimable
    char c3 = ' ';  // Imprimable (espace)

    printf("test avec 'A' : %d\n", ft_isprint("Imprimable")); // Doit afficher 1)
    printf("test avec 'z' : %d\n", ft_isprint("Imprimable")); // Doit afficher 1)
    printf("test avec '1' : %d\n", ft_isprint("Imprimable")); // Doit afficher 1)
    printf("test avec '@' : %d\n", ft_isprint("Imprimable")); // Doit afficher 1)
    printf("test avec ' ' : %d\n", ft_isprint("Imprimable")); // Doit afficher 1)
    printf("test avec '31' : %d\n", ft_isprint("Non imprimable")); // Doit afficher 0)
    printf("test avec '127' : %d\n", ft_isprint("Non imprimable")); // Doit afficher 0)
    return (0);
}
