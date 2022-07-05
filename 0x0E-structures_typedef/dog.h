#ifndef DOG_DEF
#define DOG_DEF

/**
 * struct dog - dog ata
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of a dog
 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* ends DOG_DEF */
