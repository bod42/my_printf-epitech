/*
** EPITECH PROJECT, 2017
** c code
** File description:
** printf
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

int my_putchar(char);
void flag_S(char *str);
void flag_p(int *a, int bool);
int my_printf_flag(char *str, va_list ap, int i);
int my_printf_flag2(char *str, va_list ap, int i);
int my_printf_flag3(char *str, va_list ap, int i);
int my_putstr(char*);
int my_put_nbr(int);
int my_put_short(short int);
int my_put_long(long);
int my_printf(char *, ...);
int putnbr_base(long, char *base);
int my_strlen(char *str);

#endif /* !MY_H_ */
