#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - creates a new dog and allocates it
 * @name: name to create mem and assign to for dog
 * @age: age to assign to for dog
 * @owner: owner to create mem and assign to for dog
 *
 * Return: pointer to new dog_t (struct dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (d->name == NULL)
		return (NULL);
	else
	{
		d->name = malloc(_strlen(name) + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		d->name = _strcpy(d->name, name);	
	}
	if (owner == NULL)
		d->owner = NULL;
	else
	{
		d->owner = malloc(_strlen(owner) + 1);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		d->owner = _strcpy(d->owner, owner);
	}
	d->age = age;
	return (d);
}
/**
 * _strlen - gets len of str
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - copies string from src to dest
 *
 * @dest: pointer to destination of string
 * @src: pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}
