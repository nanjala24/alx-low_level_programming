#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed to by src, including the
 * ternimating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string.
 * @src: The source string.
 * @owner: the owner of the dog.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogdog;

	if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

dogdog = malloc(sizeof(dog_t));
if (dogdog == NULL)
	return (NULL);

dogdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dogdog->name == NULL)
{
	free(dogdog);
	return (NULL);
}

dogdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dogdog->owner == NULL)
{
	free(dogdog->name);
	free(dogdog);
	return (NULL);
}

dogdog->name = _strcopy(dogdog->name, name);
dog->age = age;
dogdog->owner = _strcpy(dogdog->owner, owner);

return (dogdog);
}
