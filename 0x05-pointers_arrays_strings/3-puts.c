#include "main.h"

/**
 * _put - function that prints a string, followed by a new line, to stdout
 * @str: a char
 * Returns: a string
 */

void_puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
