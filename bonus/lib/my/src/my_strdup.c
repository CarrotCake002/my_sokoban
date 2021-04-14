/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** remaking the 'str dup' function
*/

#include "../include/my_call_lib_functions.h"

char *my_strdup(char *res, char *str)
{
    int i = 0;

    while (str[i])
        i++;
    res = malloc(sizeof(char) * i + 1);
    res = my_strcpy(res, str);
    return (res);
}