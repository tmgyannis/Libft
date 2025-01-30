#include <stdio.h>

int ft_tolower(int c)

{
    if (c >= 'A' && c <= 'Z') // Vérifie si c est une majuscule
        return (c + 32); // Convertit en minuscule
    return (c); // Retourne inchangé sinon
}

int main(void)

{
    printf("tolower('a') = %c\n", ft_tolower('a')); // a
    printf("tolower('z') = %c\n", ft_tolower('z')); // z
    printf("tolower('A') = %c\n", ft_tolower('A')); // a
    printf("tolower('Z') = %c\n", ft_tolower('Z')); // z
    printf("tolower('5') = %c\n", ft_tolower('5')); // 5
    printf("tolower('!') = %c\n", ft_tolower('!')); // !
    
    return 0;
}
