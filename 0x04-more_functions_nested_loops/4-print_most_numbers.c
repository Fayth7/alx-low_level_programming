#include "main.h"

/**
* print_most_numbers - prints 01356789/n
*Returns: void
*/
void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
(i != 2 && i != 4) ? _putchar(i + '0') : 0; /* ternary operator */
_putchar('\n');
}

