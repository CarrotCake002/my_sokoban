/*
** EPITECH PROJECT, 2021
** free_all.c
** File description:
** function to free everything
*/

#include "sokoban.h"

void free_struct(sokoban_t *skban)
{
    free(skban->map);
    free(skban->player);
    free(skban->obj);
    free(skban->win);
}

void free_map(char **map, int height)
{
    int y = 0;

    while (y < height - 1) {
        free(map[y]);
        y++;
    }
    free(map);
}

void free_all(sokoban_t *skban, char **map)
{
    free_map(map, skban->map->length);
    free_struct(skban);
}