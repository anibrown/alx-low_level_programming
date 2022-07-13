#include "main.h"
/**
 * swap_int - swap values of two integers
 * @a: integer pointer type
 * @b: integer pointer type
 */
void swap_int(int *a, int *b)
{
	int ani = *a;

	*a = *b;
	*b = ani;
}
