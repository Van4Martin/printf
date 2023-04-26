#include "main.h"

/**
 * _strlen - print interget to standard output
 * @str: integer to be printed
 * Authors: Godswill && Martin
 * Return: count
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
