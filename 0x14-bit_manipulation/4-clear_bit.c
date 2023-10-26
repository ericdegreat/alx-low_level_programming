#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This program sets the value of a bit to 0 at a given index
 * @t: parameter
 * @index: index
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *t, unsigned int index)
{
	if (index > sizeof(t) * 8)
		return (-1);
	*t &= ~(1 << index);
	return (1);
}
