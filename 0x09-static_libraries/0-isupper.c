#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character to check.
 * Return: 1 => Uppercase character, 0 => Other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
