#include "main.h"
#include <stdio.h>
/**
 *_strcpy - copies the string pointed to by src
 *@dest: pointer to destination
 *@src: pointer to source
 *
 *Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		*(dest + i) = *src;

		src++;
		i++;
	}

	return (dest);
}
