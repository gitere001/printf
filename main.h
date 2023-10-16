#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlenc(const char *str);
int _strlen(char *str);
int print_37(void);
=======

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char character);
int printf_char(va_list args, int printed);
int printf_string(va_list args, int printed);
int printf_integer(va_list args, int printed);
int selector(const char *format, va_list args, int printed);
int printf_binary(unsigned int num, int printed);
int _printf(const char *format, ...);
int _x(unsigned int num, int printed, int uppercase);
int printf_octal(unsigned int num, int printed);
int printf_unsigned(unsigned int num, int printed);
int printf_reverse(va_list args, int printed);
int printf_pointer(va_list args, int printed);

>>>>>>> 01bb1d48b61ab36f5281c43a28625dffd0a7ea71
#endif
