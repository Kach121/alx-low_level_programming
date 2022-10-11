#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type for representing dog.
 * @name: The name of dog.
 * @age: the age of a dog.
 * @owner: the name o a dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
