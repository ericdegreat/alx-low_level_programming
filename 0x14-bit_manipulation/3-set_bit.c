#include "main.h"

/**
 * set_bit - program that sets the value of a bit to 1 at a given index.
 * @t: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *t, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*t = *t | setbit;
	return (1);
}
