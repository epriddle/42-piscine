
void ft_ultimate_div_mod(int *a, int *b)
{
int div;
int mod;

div = *a;
mod = *b;
*a = div / mod;
*b = div % mod;
}

#include <stdio.h>

int main(void)
{
int a;
int b;

a = 12;
b = 2;

printf("a = %d, b = %d\n", a, b);

ft_ultimate_div_mod(&a, &b);

printf("a = %d, b = %d\n", a, b);   
}