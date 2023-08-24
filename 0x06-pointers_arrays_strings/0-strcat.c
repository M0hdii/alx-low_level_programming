#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: A pointer to the string to be concatenated.
 * @src: The source string.
 * Return: pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
