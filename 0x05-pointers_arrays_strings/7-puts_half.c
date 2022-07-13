#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: take a string
 * void puts_half(char *str)
 */
void puts_half(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
	}
	k++;
	for (k = k / 2; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
