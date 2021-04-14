/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** CPool Day3 Task04
*/
#include <stdio.h>

int my_putchar(char c);

int my_isneg(int n)
{
    int null_number = 0;
    char it_is_negative = 'N';
    char it_is_positive = 'P';

    if (n < null_number){
        my_putchar(it_is_negative);
    } else {
        my_putchar(it_is_positive);
    }
    return (0);
}
