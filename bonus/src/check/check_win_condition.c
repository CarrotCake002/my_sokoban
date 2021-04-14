/*
** EPITECH PROJECT, 2021
** check_win_condition.c
** File description:
** function to check if it's a win
*/

#include "sokoban.h"

bool check_win_condition(char **map, sokoban_t *skban)
{
    int i = 0;
    int x_placed = 0;

    while (i < skban->obj[0].count) {
        if (map[skban->obj[i].pos.y][skban->obj[i].pos.x] == BOX)
            x_placed++;
        i++;
    }
    if (x_placed == skban->obj[0].count)
        return (true);
    return (false);
}