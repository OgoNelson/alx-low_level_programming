#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: the character been check
 * Return: 1 if alphabet or 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
