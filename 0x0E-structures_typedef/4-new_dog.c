#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * _strlen - That returns the lenght of a string.
 * @s: parameter
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - Copies string pointed to by src,
 * including the terminating null byte (\0)'
 * to the buffer pointed to by dest.
 * @src: string to be copied
 * @dest: parameter
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x, y;

	y = _strlen(src);
	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @owner:owner of the dog
 * @age: age of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	dog_t *temp_dog;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	temp_dog = malloc(sizeof(dog_t));
	if (temp_dog == NULL)
		return (NULL);

	temp_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (temp_dog->name == NULL)
	{
		free(temp_dog);
		return (NULL);
	}
	temp_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (temp_dog->owner == NULL)
	{
		free(temp_dog);
		free(temp_dog->name);
		return (NULL);
	}
	_strcpy(temp_dog->name, name);
	_strcpy(temp_dog->owner, owner);
	temp_dog->age = age;

	return (temp_dog);
}
