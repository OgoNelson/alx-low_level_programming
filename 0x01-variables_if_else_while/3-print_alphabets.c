#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	/* local decleration of variables */
	char c;
	char C;
	/* intialization of variables */
	c = 'a';
	C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
