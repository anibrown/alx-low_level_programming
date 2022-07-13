#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * @dest: destination pointer to take value
 * @src: array pointer that gets copied
 * Description: copies the string pointed to by src to the buffer pointed to by dest
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
