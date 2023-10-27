#include "main.h"

/*
 * flip_bits - Function to count the number of bits to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xor_result;
	int count;

	xor_result = n ^ m; /* XOR the two numbers to find differing bits */
	count = 0;

	/* Count the set bits in the XOR result */
	while (xor_result != 0)
	{
		/* Increment the count for each set bit */
		count += xor_result & 1;
		/* Right shift the XOR result to check the next bit */
		xor_result >>= 1;
	}
	return (count);
}
