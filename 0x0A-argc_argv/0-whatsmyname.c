#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
