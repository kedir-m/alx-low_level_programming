#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

#define BYTE_LENGHT 8
typedef unsigned int siz_t;
int _strlen(const char *str);
int powr(int base, int exponent);
siz_t binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
