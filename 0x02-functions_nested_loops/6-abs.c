#include "main.h"

/**
 * _abs - computes absolute values of integers
 * @c: integer been computed
 * Return: absolute value of number
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
