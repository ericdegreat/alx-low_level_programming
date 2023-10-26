#include"main.h"

/**
 * get_bit - program returns the value of a bit at a given index.
 * @t: number to check the bits
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int t, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = t & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
