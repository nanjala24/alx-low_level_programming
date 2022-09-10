#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -entry point
 * Author: nanjala24
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);

}
