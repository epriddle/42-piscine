#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;

    while (s1[i] && s2[i])
    {
        printf("%c%c\n", s1[i], s2[i]);
        if (s1[i] != s2[i])
            if (s1[i] < s2[i])
                return (-1);
            if (s1[i] > s2[i])
                return (1);
        i++;
    }
    return (0);
}

#include <string.h>
int main(void)
{
    printf("fail = %d\npass = %d\n", ft_strcmp("hellz", "hellq"), ft_strcmp("hello", "hello"));
    printf("fail = %d\npass = %d\n", strcmp("hellz", "hellq"), strcmp("hello", "hello"));
}