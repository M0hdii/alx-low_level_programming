#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: A pointer to the memory area.
 * @src: The source buffer.
 * @n: The number of bytes to copy.
 * Return: A pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
