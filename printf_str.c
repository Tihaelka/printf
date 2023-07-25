#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: type char pointer
 * Return : c
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
/**
 * _strlenc - strlen function but applied for constant char s
 * @s : type cha pointer
 * return : c
 */
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
