/*
** EPITECH PROJECT, 2020
** my_strlen_to_char.c
** File description:
** calculate the length of a string
** until the given character
*/

#include "../include/my_call_lib_functions.h"

int my_strlen_to_endline(char *str, int i)
{
    while ((str[i] != '\n') && (str[i] != '\0'))
        i++;
    return (i);
}
