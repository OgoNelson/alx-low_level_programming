#include "main.h"

/**
 * _power - func calcu (expbase ^ pow)
 * @expbase: base of exponent
 * @pow: power of the exponent
 *
 * Return: value of (expbase ^ pow)
 */
unsigned long int _power(unsigned int expbase, unsigned int pow)
{
	unsigned long int numb;
	unsigned int i;

	numb = 1;
	for (i = 1; i <= pow; i++)
		numb *= expbase;
	return (numb);
}

/**
 * print_binary - prints a number in binary notation
 * @n: numb to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divider, confirm;
	char show;

	show = 0;
	divider = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (divider != 0)
	{
		confirm = n & divider;
		if (confirm == divider)
		{
			show = 1;
			_putchar('1');
		}
		else if (show == 1 || divider == 1)
		{
			_putchar('0');
		}
		divider >>= 1;
	}
}
