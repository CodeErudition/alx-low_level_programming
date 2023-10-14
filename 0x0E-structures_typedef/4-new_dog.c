#include <stdlib.h>
#include "dog.h"


/**
 * _str_len - A function that returns the length of a string
 *
 * @s: string to evaluate
 *
 * Return: An int (in this case the length of the string)
 */

int _str_len(char *s)
{
	int _char_indx;

	_char_indx = 0;
	while (s[_char_indx] != '\0')
	{
		_char_indx++;
	}
	return (_char_indx);
}

/**
 * *_str_cpy - A function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * 
 * @dest: Pointer to the buffer in which we copy the string
 * @src: Pointer to ther string to be copied
 *
 * Return: The pointer to dest
 */

char *_str_cpy(char *dest, char *src)
{
	int _str_len, i;

	_str_len = 0;

	while (src[_str_len] != '\0')
	{
		_str_len++;
	}
	for (i = 0; i < _str_len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - A function that creates a new dog
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: Thw owner of the dog
 *
 * Return: Pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;
	int len1, len2;

	len1 = _str_len(name);
	len2 = _str_len(owner);
	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
	{
		return (NULL);
	}
	_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (_dog->owner == NULL)
	{
		free(_dog);
		free(_dog->name);
		return (NULL);
	}
	_str_cpy(_dog->name, name);
	_str_cpy(_dog->owner, owner);
	_dog->age = age;
	return (_dog);
}
