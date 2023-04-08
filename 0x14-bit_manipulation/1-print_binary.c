#include <stdio.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
int size = sizeof(unsigned long int) *8;
unsigned long int mask = 1UL << (size - 1);
int i;

for (i = 0; i < size; i++)
{
if ((n & mask) == 0)
{
_putchar('0');
}
else
{
_putchar('1');
}
mask >>= 1;
}
}

int main()
{
unsigned long int n = 123456789;
print_binary(n);
return (0);
}
