#include <stdio.h>

int ft_isrlen(int c);

int ft_strlen(const char *s);


int main(void)
{
    const char *str1 = "Hello";
    const char *str2 = "";
    const char *str3 = "42";
    const char *str4 = "C programming";

    printf("Longueur de \"%s\": %d\n", str1, ft_strlen(str1)); // Doit afficher 5
    printf("Longueur de \"%s\": %d\n", str2, ft_strlen(str2)); // Doit afficher 0
    printf("Longueur de \"%s\": %d\n", str3, ft_strlen(str3)); // Doit afficher 2
    printf("Longueur de \"%s\": %d\n", str4, ft_strlen(str4)); // Doit afficher 13

    return 0;
}

int ft_strlen(const char *s){
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return (i);
}
