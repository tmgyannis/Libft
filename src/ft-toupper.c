#include <stdio.h>

int ft_toupper(int c)

{
    if (c >= 'a' && c <= 'z') // Vérifie si c est une minuscule
        return (c - 32); // Convertit en majuscule
    return (c); // Retourne inchangé sinon
}

int main(void)

{
    printf("toupper('a') = %c\n", ft_toupper('a')); // A
    printf("toupper('z') = %c\n", ft_toupper('z')); // Z
    printf("toupper('A') = %c\n", ft_toupper('A')); // A
    printf("toupper('Z') = %c\n", ft_toupper('Z')); // Z
    printf("toupper('5') = %c\n", ft_toupper('5')); // 5
    printf("toupper('!') = %c\n", ft_toupper('!')); // !
    
    return 0;
}
