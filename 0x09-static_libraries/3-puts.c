#include "main.h"

/**
 * _puts - program that prints a string
 * @str: The string
 * _putchar - prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar ('\n');
}
