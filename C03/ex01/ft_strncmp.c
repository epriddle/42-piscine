
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;

    while ((s1[i] && s2[i]) && i < n)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] < s2[i])
                return (-1);
            if (s1[i] > s2[i])
                return (1);
        }
        i++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("%d\n%d\n", ft_strncmp("Hello", "Hello", 3), ft_strncmp("Hello", "Hellu", 3));
    printf("%d\n%d\n", strncmp("Hello", "Hello", 3), strncmp("Hello", "Hellu", 3));
}