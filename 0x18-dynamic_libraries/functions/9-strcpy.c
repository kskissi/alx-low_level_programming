#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
