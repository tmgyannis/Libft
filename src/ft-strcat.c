#include <stdio.h>
#include <string.h>

int ft_strcat(char *dest, char *src){
    int i = 0;
    int j = 0;

while (src[i] != '\0')
{
    while (src[j] != '\0')
    {
        j++;
    }
    i++;
}
    return (j);

//pas de main 