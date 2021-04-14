/*
** EPITECH PROJECT, 2021
** check_chars.c
** File description:
** function to check if all the chars are what they have to be
*/

#include "sokoban.h"

bool check_chars(char *map)
{
    int i = 0;

    while (map[i] != '\0') {
        if (map[i] != 'X' && map[i] != 'O' && map[i] != 'P'
            && map[i] != ' ' && map[i] != '#' && map[i] != '\n')
            return (false);
        i++;
    }

    return (true);
}