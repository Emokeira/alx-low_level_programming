#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int names_1 = 0, owner_1 = 0;

	if (name != NULL && owner != NULL)
	{
		names_1 = _strlen(name) + 1;
		owner_1 = _strlen(owner) + 1;
		doggy = malloc(sizeof(dog_t));

		if (doggy == NULL)
			return (NULL);

		doggy->name = malloc(sizeof(char) * names_1);

		if (doggy->name == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->owner = malloc(sizeof(char) * owner_1);
		if (doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy);
			return (NULL);
		}

		doggy->name = _strcpy(doggy->name, name);
		doggy->owner = _strcpy(doggy->owner, owner);
		doggy->age = age;
	}

	return (doggy);
}

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
