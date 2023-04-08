/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
int i, count = 0;

while (n > mask)
mask = (mask << 1) | 1;

for (i = 0; mask != 0; i++)
{
if (n & mask)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
 
mask = mask >> 1;
}

if (!count)
_putchar('0');
}
