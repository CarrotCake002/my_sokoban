/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** copy 'n' characters of a
** string into another string
*/

#include "../include/my_call_lib_functions.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    puts("error0");
    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    puts("error1");
    if (dest[i] != '\0')
        dest[i] = '\0';
    puts("error2");
    return (dest);
}