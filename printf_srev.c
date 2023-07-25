#include "main.h"

/**
 * printf_srev - function that prints  a str in reverse
 * @args: type struct va_arg where is allocaed printf argument
 *
 * Return: the string
 */
int printf_srev(va_list args)
{
	char *s = va_args(args, char*);
	int i;
	int j = 0;

	if(s == NULL)
		s = "(NULL)";
	while (s[j] != '\0')
		j++;
	for (i = j -1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
