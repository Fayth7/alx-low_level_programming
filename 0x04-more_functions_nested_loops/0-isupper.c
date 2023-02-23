#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase character
* @c: Char to be checked
* Return: 1 if c is uppercase otherwise 0
*/
int _isupper(int c)
{
char c;

if (c >= 'A' && c <= 'Z')
printf("Character is Upper Case Letters");
else
printf("Character is Not Upper Case Letters");

return (0);
}
