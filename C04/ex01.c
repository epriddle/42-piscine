#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = -1;
    while (*str++)
    {
        write(1, &str[i], 1);
    }
}

int main()
{
    ft_putstr("hello world\n");
}