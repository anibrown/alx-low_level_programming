#include "main.h"
/**
 * print_rev - print a reverse in string
 * @s:takes a string type of char
 * Return:void would mean we got it right
 */
void print_rev(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	for (k = k - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
