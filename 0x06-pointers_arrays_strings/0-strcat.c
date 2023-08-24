#include "main.h"
/**
 * strcat - Concatenates two strings.
 * @dest: A pointer to the string to be concatenated.
 * @src: The source string.
 *
 * Return: pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
