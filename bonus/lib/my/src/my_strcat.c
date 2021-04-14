/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** function that concatenates two strings
*/

#include "../include/my_call_lib_functions.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len = my_strlen(dest);


    while (src[i] != '\0') {
        dest[len] = src[i];
        i++;
        len++;
    }
    dest[len] = '\0';
    return (dest);
}
