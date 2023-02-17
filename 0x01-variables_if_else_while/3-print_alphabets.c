#include <stdio.h>

/**
*main - prints alphabet in upper and lower case
*Return: 0 on success
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'z'; c++)
putchar(c);

putchar('\n');
return (0);
}
