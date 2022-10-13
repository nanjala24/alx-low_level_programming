#include "main_h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - find the length of a string.
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
 * new_dog - creates a new dog.
 * @name: The name of the dog.
 * @age: the agae of the dog.
 * @owner: the owner of the dog.
 *
 * Return: the new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogdog;
	if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

dogdog = malloc(sizeof(dog_t));
if (dogdodg == NULL)
	return (NULL);

dogdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dogdog-> == NULL)
{
	free(dogdog);
	return (NULL);
}

dogdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dogdog->owner == NULL)
{
	free(dogdog->name;
	free(dogdog);
	return (NULL);
}

dogdog->name = _strcopy(dogdog->name, name);
dog-> = age;
dogdog-> = _strcpy(dogdog->owner, owner);

return (dogdog);
}
