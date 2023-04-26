#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 if successful
 */
int main(void)
{
int i;
long int a, b, c;
a = 1;
b = 2;
printf("%ld, %ld", a, b);

for (i = 3; i <= 50; i++)
{
	c = a + b;
	printf(", %ld", c);
	a = b;
	b = c;
}
printf("\n");
return (0);
}
