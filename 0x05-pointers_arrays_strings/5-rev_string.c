#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: takes a string
 */
void rev_string(char *s)
{
	int i, c = 0;
	char ani;

	while (s[c] != '\0')
		c++;
	c--;
	for (i = 0; i < c; c--, i++)
	{
		ani = s[i];
		s[i] = s[c];
		s[c] = ani;
	}
}
