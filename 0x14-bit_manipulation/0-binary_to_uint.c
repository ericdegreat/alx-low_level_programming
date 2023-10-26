#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to an unsigned int.
 * @d: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *d)
{
	int c;
	unsigned int num;

	num = 0;
	if (!d)
		return (0);
	for (c = 0; d[c] != '\0'; c++)
	{
		if (d[c] != '0' && d[c] != '1')
			return (0);
	}
	for (c = 0; d[c] != '\0'; c++)
	{
		num <<= 1;
		if (d[c] == '1')
			num += 1;
	}
	return (num);
}
