/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** compare two strings' length
*/

#include "../include/my_call_lib_functions.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int len_one = my_strlen(s1);
    int len_two = my_strlen(s2);

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    if (i == len_one && i == len_two)
        return (0);
    else
        return (-1);
}
