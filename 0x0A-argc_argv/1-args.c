#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc:counts number of arguments
 * @argv: arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])

{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
