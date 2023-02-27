#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: input string
 * Return: string in reverse
 */

void print_rev(char *s)
{
char rev = s[0];
int counter = 0;
int i;
while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[1];
s[1] = s[counter];
s[counter] = rev;
}
}
