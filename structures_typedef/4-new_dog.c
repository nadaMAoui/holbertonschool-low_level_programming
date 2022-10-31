#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	return (NULL);

	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}
	return (new_dog);
}
