#include "main.h"

/*
* get_endianness - gets the endianness of the system
*
* Return: 0 if big endian or 1 if little endian
*/

int get_endianness(void)
{
	int i;
	char *byte_order;

	i = 1;
	byte_order = (char *)&i;

	/*
	* If the first byte of the integer is 1, it's little endian.
	* Otherwise, it's big endian.
	*/

	return ((int)*byte_order);
}
