#include "main.h"

/**
 * flip_bits - counts the number of bits to be changed.
 * to get from one number to the another.
 * @x: first number.
 * @y: second number.
 *
 * Return: number of bits to change.
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = x ^ y;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}

