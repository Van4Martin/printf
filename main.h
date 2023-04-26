#ifndef _main_h
#define _main_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printint(int x);
int _print_string(char *str);
int han(const char *format, va_list args);
#endif /* Main.h */
