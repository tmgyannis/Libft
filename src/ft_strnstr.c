#include <stdio.h>
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(void)
{
    char str[] = "hello world";

    printf("Recherche 'world' dans 'hello world' (11) : %s\n", ft_strnstr(str, "world", 11));
    printf("Recherche 'world' dans 'hello world' (5) : %s\n", ft_strnstr(str, "world", 5) ? "Trouvé" : "(null)");
    printf("Recherche 'cd' dans 'abcdef' (6) : %s\n", ft_strnstr("abcdef", "cd", 6));
    printf("Recherche 'cd' dans 'abcdef' (2) : %s\n", ft_strnstr("abcdef", "cd", 2) ? "Trouvé" : "(null)");
    printf("Recherche '' dans 'abcdef' (6) : %s\n", ft_strnstr("abcdef", "", 6));

    return 0;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i, j;

    if (*needle == '\0')
        return ((char *)haystack);

    for (i = 0; haystack[i] && i < len; i++)
    {
        j = 0;
        while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < len)
        {
            if (needle[j + 1] == '\0')
                return ((char *)&haystack[i]);
            j++;
        }
    }
    return (NULL);
}
