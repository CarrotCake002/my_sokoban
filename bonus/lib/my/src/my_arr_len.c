/*
** EPITECH PROJECT, 2021
** my_array_len.c
** File description:
** file to calculate the length of an array
*/

#include "../include/my_call_lib_functions.h"

int my_arr_len(char *str)
{
    int i = 0;
    int size = 1;

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            i++;
            size++;
        } else
            i++;
    }
    return (size);
}