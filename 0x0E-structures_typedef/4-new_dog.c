#include "dog.h"
#include <stdlib.h>
#include<string.h>

/**
 * _strlen - return the length of string
 * @str: string input
 *
 * Return: return the length of string
 */
int _strlen(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
                ;

        return (i);
}

/**
 * new_dog - creates s new dog from struct dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new dog
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	strcpy((*dog).name, name);
	strcpy((*dog).owner, owner);
	(*dog).age = age;
	return (dog);
}
