#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int Printed_Number)
{
	unsigned int m, d, count;

	if (Printed_Number < 0)
	{
		_putchar(45);
		m = Printed_Number * -1;
	}
	else
	{
		m = Printed_Number;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}

