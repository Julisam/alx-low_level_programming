#include "main.h"
/**
 *_strlen - finds and outputs length of string.
 *@s: pointer to string.
 *
 *Return: length of a string.
 */

/**
 *_strcat - concatenates two strings
 *@dest: destination string.
 *@src:  source string
 *Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int last = _strlen(dest);
	
	while (*src != '\0')
	{
		*(dest + last) = *src;
		src++;
		last++;
	}

	*(dest + last) = '\0';

	return (dest);
}


int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
