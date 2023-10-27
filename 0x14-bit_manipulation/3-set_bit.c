#include "main.h"

/*
 * set_bit - set bit value to 1
 * @*n: pointer to the number
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index >= sizeof(*n) * 8)
	{
		/* Check if the index is out of bounds. */
		return (-1);
	}

	/*
	* Create mask with '1' at desired bit position
	* & '0' at all other positions.
	*/
	m = 1 << index;

	/* Use bitwise OR to set the bit at the given index to 1. */
	*n |= m;

	return (1);
}
