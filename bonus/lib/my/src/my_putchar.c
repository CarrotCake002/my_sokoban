/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** print program to use in all the other programs
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
