#include "main.h"

/**
 * _strpbrk - locates the first occurrence of any byte in accept in s
 * @s: input string
 * @accept: string of bytes to accept
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return (NULL);
}
