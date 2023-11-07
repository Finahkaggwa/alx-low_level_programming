#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function for dog structure
 * @name: parameter for dog name
 * @age: parameter for dog age
 * @owner: parameter for owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
