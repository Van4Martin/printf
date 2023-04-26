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
		if (c == '%' && c != '\0')
		{
			c = *(format++);
			switch (c)
			{
				case 'c':
					count += _putchar((char)va_arg(arg_v, int));
					break;
				case 's':
					{
					char *str = va_arg(arg_v, char*);

					count += _print_string(str);
					break;
					}
				case '%':
					count += _putchar('%');
					break;
				case 'd':
				case 'i':
					count += printint(va_arg(arg_v, unsigned int));
					break;
				default:
					count += _putchar(c);
					break;
			}
		}
		else
		{
			count += _putchar(c);
		}
	}
	va_end(arg_v);
	return (count);
}
