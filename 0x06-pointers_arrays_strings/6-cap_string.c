#include "main.h"

/**
 * cap_string - function to capitalise string
 * @s: The string to capitalise
 * Return: a string
 */
char *cap_string(char *s)
{
	int i;
	int j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!',
	'?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
