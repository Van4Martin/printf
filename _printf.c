#include "main.h"

/**
 * _printf - prints to the stdio
 * @format: Input specifiers
 * Return: count
 */
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	size = _strlen(format);
	if (size <= 0)
	{
		return (0);
	}
	va_start(args, format);
	size = han(format, args);
	va_end(args);
	return (size);
}
