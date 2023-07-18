#include "main.h"

/**
 * print_sign - print sign of numbers
 * @n: number been checked
 * Return: 1 if >0 or 0 if =0 or -1 if <0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
