#include <stdio.h>

/**
*main -  prints the lowercase alphabet in reverse, followed by a new line
*Return: Always 0 (success)
*/

int main(void)
{

char lc;
for (lc = 'z'; lc >= 'a'; lc--)
putchar(lc);
putchar('\n');

return (0);

}
