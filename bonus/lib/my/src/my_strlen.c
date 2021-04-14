/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** Day4 task3
*/

#include "../include/my_call_lib_functions.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}
