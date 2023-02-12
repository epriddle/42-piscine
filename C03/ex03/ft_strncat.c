int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    j = ft_strlen(dest);

    while (src[i] && i < nb)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char  a[20] = "Hello";
    char  b[20] = "Hello";

    printf("%s\n",ft_strncat(a, " World", 5));
    printf("%s\n", strncat(b, " World", 5));
}