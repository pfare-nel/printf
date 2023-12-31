#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>


#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

/* Struct definition */

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */

typedef struct {
    char fmt;  
    int (*fn)(va_list args, char *buffer, int flags, int width, int precision, int size);
} fmt_t;


/* Flags */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* Sizes */
#define S_LONG 2
#define S_SHORT 1

/* Custom printf conversion specifier function prototypes */
int _printf(const char *format, ...);
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hex(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_HEX(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);
int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_rot13(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_non_printable(va_list types, char buffer[],int flags, int width, int precision, int size);

/* Printf handler */
int handle_print(const char *fmt, int *ind, va_list args, char buffer[],
                 int flags, int width, int precision, int size);

/* Helper function prototypes */
int _putchar(char c);
int _itoa(int n, char *str);

/* Specifier handlers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/* Boolean checkers*/
int is_digit(char);
int is_printable(char);
int append_hexa_code(char, char[], int);

/* Operstions functions */
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

/* Write handlers*/
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[], int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length, int width, int flags, char padd, char extra_c, int padd_start);
int write_unsigned(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);



#endif /* MAIN_H */

