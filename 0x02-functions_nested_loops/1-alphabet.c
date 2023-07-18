#include "main.h"

/**
 * print_alphabet - prints all lowercase letters
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	/* local decleration of variable */
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
