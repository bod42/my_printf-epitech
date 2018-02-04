/*
** EPITECH PROJECT, 2017
** c code
** File description:
** printf
*/

#include "../include/my.h"
#include <unistd.h>

int	my_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}
