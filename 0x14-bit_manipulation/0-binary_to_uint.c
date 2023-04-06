#include <stdlib.h>

/**
 * binary_to_unit; converts a binary number to an unsigned int
 *@b: String with binary number
 * Return; result
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
{
return (0);
}
for (; *b != '\0'; b++)
{
if (*b == '0' || *b == '1')
{
result = (result << 1) + (*b - '0');
}
else
{
return (0);
}
}
return (result);
}
