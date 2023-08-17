#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9).
 * @c: The number to be checked.
 * Return: 1 if the number is a digit, 0 if not.
 */
int _isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);

	else
		return (0);
}
