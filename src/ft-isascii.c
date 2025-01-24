#include <stdio.h>
#include <ctype.h>

// Définition de isascii
int ft_isascii(char* c)
{
    if ((c >= "65" && c <= "127"))
        return (1);
    return (0);
}

int main() {
    char c1 = 'A'; // Caractère ASCII
    char c2 = 200; // Caractère non-ASCII (code > 127)

    printf("test avec 'A' : %d\n", ft_isascii("est un ASCII")); // Doit afficher 1)
    printf("test avec 'z' : %d\n", ft_isascii("est un ASCII")); // Doit afficher 1)
    return (0);
}
