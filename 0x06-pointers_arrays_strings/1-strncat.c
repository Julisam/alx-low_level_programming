#include "main.h"
/**
 *_strncat - concatenates two strings.
 *@dest: destination strnig
 *@src:  source string
 *@n:  no of bytes to use
 *Return: destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
    int i;
    
	int last = _strlen(dest);

	for(i = 0; i < n && *src != '\0'; i++)
	{
		*(dest + last) = *src;
		src++;
		last++;
	}


	return (dest);
}


/**
 *_strlen - finds and outputs length of string.
 *@s: pointer to string.
 *Return: length of a string.
 */

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