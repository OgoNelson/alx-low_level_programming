#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	/* decleration and initialization of variables */
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
