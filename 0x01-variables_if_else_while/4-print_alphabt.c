#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	/* local decleration variable */
	char c;

	/* initialization od variable */
	c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
