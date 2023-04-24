#include "main.h"
/**
 * _printf - prints to the stdio
 * It considers format specifiers 
 * @format: Input specifiers
 *
 * Authors - Martin Dotsey & Godswill Ogbuwa
 * Return: count
 */
int _printf(const char *format, ...)
{
    va_list arg_v;
    va_start(arg_v, format);

    int count = 0;
    char c;

    while ((c = *(format++))) {
        if (c == '%') {
            c = *(format++);
            switch (c) {
                case 'c': {
                    char arg = (char) va_arg(arg_v, int);
                    _putchar(arg);
                    count++;
                    break;
                }
                case 's': {
                    char* arg = va_arg(arg_v, char*);
                    while (*arg) {
                        _putchar(*(arg++));
                        count++;
                    }
                    break;
                }
                case '%': {
                    _putchar('%');
                    count++;
                    break;
                }
                default:
                    break;
            }
        } else {
            _putchar(c);
            count++;
        }
    }

    va_end(arg_v);

    return count;
}

