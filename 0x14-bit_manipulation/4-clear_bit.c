#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0.
 * @x: pointer to the number to be changed.
 * @index: index of the bit to be cleared.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = (~(1UL << index) & *x);
	return (1);
}

