#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @t: 1st number
 * @u: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int t, unsigned long int u)
{
	int c, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = t ^ u;

	for (c = 63; c >= 0; c--)
	{
		current = exclusive >> c;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
