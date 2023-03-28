#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>


/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/


struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*Main functions*/

int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

typedef struct format
{
	char f;
	int (*p)(va_list, int);
} form;
/* main function */
int _printf(const char *format, ...);

/* side functions */
int _strlen(const char *s);
int _putchar(char c);
int print_number(int, int);
int _isnumber(int, int);
int _compare(char, int, va_list);
int hexa(int x);
int _validate(int, char, char);
int positive(int, int, int);
int negative(int, int, int, int);
int print_binary(unsigned int, unsigned int);
int _rev(va_list arg, int len);
int print_rot13(va_list arg, int len);

/*Helper functions*/

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
int _binary(va_list, int);
int _char(va_list, int);
int _str(va_list, int);
int _int(va_list, int);
int _binary(va_list, int);
int _strspe(va_list, int);
#endif
