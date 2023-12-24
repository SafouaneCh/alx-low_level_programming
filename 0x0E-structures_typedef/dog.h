#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - a dog struct
 *
 * @name: dogs name
 *
 * @age: dogs age
 *
 * @owner: owner's name
 *
 * Description: just a lone dog struct in a bit kitty world
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
