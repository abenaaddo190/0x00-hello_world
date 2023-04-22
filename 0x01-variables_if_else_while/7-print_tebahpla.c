#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex = '0';

	while (hex <= '9' || hex <= 'f')
	{
		putchar(hex);
		hex++;
		if (hex == ':')
			hex = 'a';
	}

	putchar('\n');

	
	return (0);
}
