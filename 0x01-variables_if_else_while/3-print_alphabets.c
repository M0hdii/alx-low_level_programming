#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase then in uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char U = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (U <= 'Z')
	{
		putchar(U);
		d++;
	}
	putchar('\n');
	return (0);

}
