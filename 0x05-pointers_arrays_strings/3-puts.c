#include "main.h"

/**
 * puts - function that prints a string, followed by a new line, to stdout
 * @str: a char
 * Returns: a string
 */

void _puts(char *str)
{
	int i = 0
	while (*(str + i) != '\0')
{
	putchar(*(str + i));
	i++;
}
putchar(10);
}
