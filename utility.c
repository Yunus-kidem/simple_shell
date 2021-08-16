#include <stdio.h>

/**
 * _strcat - Concat Two String
 * @dest:First String
 * @src:Second String
 * Return:First String + Second String Char *
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
/**
 * _strncpy - copies src string to dest string
 * @dest:char
 *  @src:char
 * @n:int
 * Return:char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
