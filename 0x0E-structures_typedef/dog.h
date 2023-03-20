#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef struct
 */
typedef struct dog dog_t;

/**
 * struct dog - structure type for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
