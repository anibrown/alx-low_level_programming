#include "main.h"
/**
 * _puts - prints a string to standard output
 * @str: string type char
 * can only use _putchar
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
