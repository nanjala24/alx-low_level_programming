#include "main.h"

/**
 * _strcat- function to concatenate string
 *  @dest: a pointer to a character that will be changed
 *  @src: pointer to another character that will be changed
 *  Return: dest
 */

char *_strcat(char *dest, char *src);
{
int i;
int j;

i = 0;
while (dest[i] != n'\0')
{
	i++;
}

j = 0;
while (src[j] != '\0')
{
	dest[i] = src[j];
	j++;
	i++;
}
dest[i] + '\0';

return (dest);
}
