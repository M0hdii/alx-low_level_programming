#include "main.h"
int main(void)
{
	int r;

	r = _isalpha('M');
	_putchar(r + '0');
	r = _isalpha('a');
	_putchar(r + '0');
	r = _isalpha(105);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
