#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer.
 * @b: The second integer.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
