#ifndef DOG_H
#define DOG_H

/**
** struct dog - Structure for dog's data
** @name: the dog's name
** @age: the dog's age
** @owner: the dog's owner's name
**
** Description: Longer description
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* ifndef DOG_H */
