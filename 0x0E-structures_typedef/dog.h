#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure for a dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: This struct is for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
