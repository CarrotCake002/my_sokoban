/*
** EPITECH PROJECT, 2021
** check_player_exist.c
** File description:
** function to check if player exists
*/

#include "sokoban.h"

bool check_player_exist(char *map)
{
    int i = 0;

    while (map[i] != '\0') {
        if (map[i] == 'P')
            return (true);
        i++;
    }
    return (false);
}