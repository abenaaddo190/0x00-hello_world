#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in the Fibonacci sequence
 * Return: 0 if successful
 */
int main(void)
{
int prev = 1;
int current = 2;
int count = 0;

printf("%d, %d, ", prev, current);
count += 2;

while (count < 98)
{
	int next = prev + current;

	printf("%d", next);

	if (count < 97)
	{
		printf(", ");
	}
	prev = current;
	current = next;
	count++;
}

printf("\n");
return (0);
}
