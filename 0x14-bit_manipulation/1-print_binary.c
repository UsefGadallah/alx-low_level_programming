#include "main.h"

/**
 * print_binary - prints the binary number equivalent to a decimal number.
 * @x: number to be printed in binary number.
 */
void print_binary(unsigned long int x)
{
	int y, count = 0;
	unsigned long int current;

	for (y = 63; y >= 0; y--)
	{
		current = x >> y;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

