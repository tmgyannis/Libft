#include <stdio.h>

int main(void)

{

char str[] = "good, boy!";
    
    printf("Recherche 'o' : %s\n", ft_strchr(str, 'o')); // oo, boy!
    printf("Recherche 'b' : %s\n", ft_strchr(str, 'b')); // boy!
    printf("Recherche 'x' : %s\n", ft_strchr(str, 'x')); // (null)
    printf("Recherche '\\0' : %s\n", ft_strchr(str, '\0')); // ""

    return 0;
    
}
