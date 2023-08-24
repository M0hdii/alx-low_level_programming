#include "main.h"
/**
 * strcat - Concatenates two strings.
 * @dest: A pointer to the string to be concatenated.
 * @src: The source string.
 *
 * Return: pointer to the destination string @dest.
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
