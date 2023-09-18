#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: function parameter
* Return: length
*/


int _strlen(char *s)

{
int l;
int count = 0;

for (l = 0; s[l] != '\0'; l++)
count++;
return (count);
}
