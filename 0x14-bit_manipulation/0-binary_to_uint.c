#include "main.h"

/**
 * binary_to_uint - func converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: The unsigned int, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (!b)
	{
		/* If the input string is NULL, return 0 */
		return (0);
	}

	result = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		/* Check if the current character is not '0' or '1' */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

	/* Shift the result to the left by one bit and add the current bit */
	result = (result << 1) | (b[i] - '0');
	}

	return (result);
}
