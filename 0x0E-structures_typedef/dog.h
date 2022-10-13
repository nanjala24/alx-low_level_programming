#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - defines new data type
 * @name : name of the dog
 * @age : age of the dog
 * @owner : name of the dog owner
 * Description: This struct is for a dog
 * Return : Always 0
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*MAIN_H*/
