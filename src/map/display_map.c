/*
** EPITECH PROJECT, 2021
** display_map.c
** File description:
** function to display the whole map in its position
*/

#include "sokoban.h"

void display_map(char **map, sokoban_t *skban)
{
    int i = 0;

    while (map[i] != NULL) {
        mvprintw(skban->map->pos.x + i, skban->map->pos.y, map[i]);
        i++;
    }
}