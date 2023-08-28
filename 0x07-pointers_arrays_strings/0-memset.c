#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: A pointer to the memory area.
 * @c: The character to fill the memory area.
 * @n: The number of bytes.
 * Return: A pointer.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
