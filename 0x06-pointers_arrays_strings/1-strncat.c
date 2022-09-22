#include "main.h"
/**
 * _strncat - function to concatenate string from n byte
 * @dest: a string to concatenate
 * @src: another string to concatenate
 * @n: an integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

for (j = 0; dest[j] != '\0'; j++)
{}

for (i = 0; i < n && scr[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
dest[j + i] = '\0';

return (dest);
