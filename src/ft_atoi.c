#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[] = "42";
    char str2[] = "-123";
    char str3[] = "  567";
    char str4[] = "98abc";
    char str5[] = "abc123";

    printf("atoi(\"42\") = %d\n", atoi(str1));   // 42
    printf("atoi(\"-123\") = %d\n", atoi(str2)); // -123
    printf("atoi(\"  567\") = %d\n", atoi(str3)); // 567 (ignore les espaces)
    printf("atoi(\"98abc\") = %d\n", atoi(str4)); // 98 (s'arrête au 'a')
    printf("atoi(\"abc123\") = %d\n", atoi(str5)); // 0 (aucun chiffre au début)

    return 0;
}
