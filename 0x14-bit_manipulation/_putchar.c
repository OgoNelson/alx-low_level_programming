#include <unistd.h>

/**
 * _putchar - sends the character c to stdout
 * @c: character to print
 *
 * Return: 1 if successful.
 * On error, -1 is returned.r
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
