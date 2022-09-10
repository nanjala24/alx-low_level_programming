#include <stdio.h>
/**
 * main - Entry point
 *
 * Details: using main function
 * Author:nanjala24
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet= 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}putchar('\n');
	return (0);
}
