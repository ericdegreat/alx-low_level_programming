
#include "main.h"
/**
 * _memset - Program fills a block of memory with a specific value
 * @s: starting memory address to be filled
 * @b: value desired
 * @n: bytes number to be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)

{
	int a = 0;

	for (; n > 0; a++)
	{

		s[a] = b;
		n--;
	}
	return (s);

}
