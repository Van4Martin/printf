#include "main.h"
/**
 * _printf - prints to the stdio
 * @format: Input specifiers
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list arg_v;
	int count = 0;
	char c;

	va_start(arg_v, format);
	while ((c =  *(format++)))
	{
		if (c == '%')
	{
		c = *(format++);
		switch (c)
		{
			case 'c':
				{
				int  arg =  va_arg(arg_v, int);

				count += _putchar((char)arg);
				}
				break;
			case 's':
				{
				char *str = va_arg(arg_v, char*);

				while (*str)
				{
					count =+ _putchar(*(str++));
				}
				}
				break;
			case '%':
				count += _putchar('%');
				break;
		}
	}
	else
	{
		_putchar(c);
		count++;
	}
	}
	va_end(arg_v);
	return (count);
}
