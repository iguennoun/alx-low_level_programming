#include <stdlib.h>
#include "dog.h"

/**
** new_dog - Creates a new dog
** @name: The name of the new dog
** @age: The age of the new dog
** @owner: the name of the owner of the new dog
**
** Return: dog struct or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, name_len, owner_len;

	ndog = malloc(sizeof(dog_t));
	if (!ndog)
		return (NULL);

	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;
	
	ndog->name = malloc(name_len + 1);
	if (!ndog->name)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(owner_len + 1);
	if (!ndog->owner)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = '\0';

	ndog->age = age;

	for (i = 0; i < owner_len; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = '\0';

	return (ndog);
}
