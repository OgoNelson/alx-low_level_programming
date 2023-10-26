#include "main.h"

/*
 * get_bit - gets the bit
 * @n: the number
 * @index: the index to print
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int m;
	int bit_value;

	if (index >= sizeof(n) * 8)
	{
		/* Check if the index is out of bounds.*/
		return (-1);
	}
	/* Create a mask with the desired bit at '1' and all other bits at '0'. */
	m = 1 << index;

	/* Use bitwise AND to extract the value of the bit at the given index. */
	bit_value = (n & m) >> index;

	return (bit_value);
}
