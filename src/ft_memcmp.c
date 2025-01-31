#include <stdio.h>

int main(void)
{
    printf("memcmp(\"hello\", \"hello\", 5) : %d\n", ft_memcmp("hello", "hello", 5)); // 0
    printf("memcmp(\"hello\", \"hella\", 5) : %d\n", ft_memcmp("hello", "hella", 5)); // >0
    printf("memcmp(\"abc\", \"xyz\", 3) : %d\n", ft_memcmp("abc", "xyz", 3)); // < 0
    printf("memcmp(\"hell\", \"hello\", 4) : %d\n", ft_memcmp("hell", "hello", 4)); // 0
    return 0;
}
