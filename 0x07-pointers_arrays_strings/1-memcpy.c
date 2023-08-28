#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: A pointer to the memory area.
 * @src: The source buffer.
 * @n: The number of bytes to copy.
 * Return: A pointer.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
