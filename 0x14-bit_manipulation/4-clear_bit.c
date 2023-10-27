#include "main.h"

/*
 * clear_bit - sets bit to 0
 * @*n: the number
 * @index: the bit index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index >= sizeof(*n) * 8)
	{
		/* Check if the index is out of bounds. */
		return (-1);
	}

	/*
	* Create a mask with a '0' at the desired bit position
	* and '1' at all other positions.
	*/
	m = ~(1 << index);

	/* Use bitwise AND to set the bit at the given index to 0. */
	*n &= m;

	return (1);
}
