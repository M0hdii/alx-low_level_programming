#include "main.h"
/**
 * reverse_array - reverses the content of an array.
 * @a: the array to reverse.
 * @n: number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp =  0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
