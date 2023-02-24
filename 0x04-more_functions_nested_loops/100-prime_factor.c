

15
0x04-more_functions_nested_loops/10-main.c
@@ -0,0 +1,15 @@
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}
33
0x04-more_functions_nested_loops/10-print_triangle.c
@@ -0,0 +1,33 @@
#include "main.h"

/**
 * print_triangle - print a triangle, followed by anew line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++);
		{
			for (j = i; j < size; j++)
			{
				putchar(' ');
			}

			for (j = 1; j <= i; j++);
			{
				putchar('#');
			}

			putchar('\n');
		}
	}
}
38
0x04-more_functions_nested_loops/100-prime_factor.c
@@ -0,0 +1,38 @@
#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always o (success)
 */
int main(void)
{
long int n;
long int max;
long int i;
n = 612852475143;
max = -1;

while (n % 2 == 0)
{
max = 2;
n /= 2;
for (i = 3; i <= sqrt(n); i = i + 2)
while (n % i == 0)
{
max = i;
n = n / i;
}
}

if (n > 2)
max = n;
printf("%1d\n", max);

return (0);
}
