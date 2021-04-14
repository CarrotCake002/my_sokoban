/*
** EPITECH PROJECT, 2020
** my_str_to_char_cpy.c
** File description:
** copy a string until you it finds
** the specified character
*/

#include "../include/my_call_lib_functions.h"

char *my_str_to_char_cpy(char *dest, char const *src, char character)
{
    int i = 0;

    while (src[i] != character) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
