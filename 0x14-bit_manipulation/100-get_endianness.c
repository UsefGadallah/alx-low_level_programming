#include "main.h"

/**
 * get_endianness - checks if a machine is a little or a big endian.
 * Return: 0 for a big, and 1 for a little.
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *x = (char *) &j;

	return (*x);
}

