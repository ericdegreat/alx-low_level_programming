#include "main.h"

/**
 * _puts - a function that prints a string
 * @str - function parameter
 */

void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	_putchar (str[s]);
	_putchar ('\n');
}
