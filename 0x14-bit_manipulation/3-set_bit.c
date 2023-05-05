#include "main.h"

/**
 * set_bit - sets a bit at a given index to be 1.
 * @x: pointer to the number to be changed.
 * @index: index of the bit to be set to 1.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = ((1UL << index) | *x);
	return (1);
}
