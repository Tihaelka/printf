#include <main.h>
/**
 * _printf - Prints formatted output according to a given format.
 * @format: A string containing the format specifier and the text to print.
 *
 * Return: The number of characters printed (excluding the null byte).
 *         Returns -1 if the format string is NULL or invalid.
 */
int _printf(const char *format, ...)
{
	convert_match m[] = {"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_serv},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_unsigned},
		{"%S", pritf_exclusive_string}, {"%p", printf_pointer}
	}
	va_list args;
	int i = 0, j, len = 0;

	va_star(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;

		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
