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

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = ft_strlen(dest);

    while (src[i])
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

    printf("%s\n", ft_strcat(a, " World"));
    printf("%s\n", strcat(b, " World"));
}