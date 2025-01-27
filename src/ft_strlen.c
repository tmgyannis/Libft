#include <stdio.h>
#include <string.h>

size_t strlen(const char *str);

int ft_strlen(const char *str) {

}

int main(void)
{
    printf("Longueur de \"Hello\": %d\n", ft_strlen("Hello")); // 5
    printf("Longueur de \"\": %d\n", ft_strlen(""));           // 0
    printf("Longueur de \"42\": %d\n", ft_strlen("42"));       // 2
    printf("Longueur de \"Libft\": %d\n", ft_strlen("Libft")); // 5
    return (0);
}
