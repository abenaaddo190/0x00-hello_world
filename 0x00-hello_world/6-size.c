#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int var1;
	long int var2;
	long long int var3;
	char var4;
	float var5;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(var4));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(var1));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(var2));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(var3));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(var5));
	return (0);
}
