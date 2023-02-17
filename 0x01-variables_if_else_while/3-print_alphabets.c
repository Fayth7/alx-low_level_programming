#include <stdio.h>

/**
*main - prints alphabet in upper and lower case
*Return: Always 0 (success)
*/
int main(void)

{
char c;

for (c = 'a'; c <= 'z'; c+)
putchar(c);
for (c = 'A'; c <= 'z'; c++)
putchar(c);

putchar('\n');
return (0);
}
