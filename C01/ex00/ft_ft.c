#include <stdio.h>
#include <stdlib.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int *a;
    a = malloc(sizeof(int) * 2); // allocate memory for the variable a
    ft_ft(a);

    printf("%d", *a);
}