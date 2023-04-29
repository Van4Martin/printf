#include "main.h"

/**
 * _print_string - prints to the stdio
 * @str: Input specifiers
 * Return: count
 */
int _print_string(char *str)
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
