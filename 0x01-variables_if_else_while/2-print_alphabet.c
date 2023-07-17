#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	/* local decleration of variable */
	char c;

	/* initialization of variable */
	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
