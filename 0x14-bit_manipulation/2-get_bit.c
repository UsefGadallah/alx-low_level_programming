#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number.
 * @x: number to be searched.
 * @index: index of a bit.
 *
 * Return: value of a bit.
 */
int get_bit(unsigned long int x, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (x >> index) & 1;

	return (bit_val);
}

