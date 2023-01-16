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