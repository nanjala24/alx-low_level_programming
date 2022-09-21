#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: a char
 * Returns: a string
 */

void _puts(char *str)
{
int i

	for (i = 0; str[i] != '\0'; i++)
{
	putchar(str[i]);
}
putchar('\n');
}
