#include <stdio.h>

/**
* Output
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
