#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase letters 10 times
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	/* local decleration of variables */
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
