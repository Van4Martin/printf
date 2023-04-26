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
	char *str;

	va_start(arg_v, format);
	while ((c =  *(format++))) {
		if (c == '%' && c != '\0') {
			c = *(format++);
			switch (c) {
				case 'c':
					count += print_char(arg_v);
					break;
				case 's':
					count += print_string(arg_v);
					break;
				case 'd':
				case 'i':
					count += print_int(arg_v);
					break;
					/* add cases */
				default:
					count += _putchar('%');
					count += _putchar(c);
					break;
			}
		}
		else {
			count += _putchar(c);
		}
	}
	return (count);
}
