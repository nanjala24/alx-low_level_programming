#include "main.h"

/**
 * leet - function to convert string  to 1337
 * @str: The string to be converted
 *
 * Return: pointer to be encoded string
 */
char *leet(char *str)
{
	int j;
	int i;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[j])
{
		for (i = 0; i <= 7; i++)
		{
			if (str[j] == leet[i] ||
			str[j] - 32 == leet[i])
			str[j] = i + '0';
		}
		j++;
	}
	return (str);
}
