/*
** EPITECH PROJECT, 2021
** position_map.c
** File description:
** function to give the position to the map in the screen
*/

#include "sokoban.h"

sokoban_t *give_mappos(sokoban_t *skban, char **map)
{
    skban->win = get_winsize(skban->win, skban->free_it);
    skban->map = get_mapdim(skban, map);
    if (!skban->map || !skban->win)
        return (NULL);
    skban->map->pos = get_mappos(skban->map, skban->win);
    skban->player = get_plyerpos(map, skban->player, skban->free_it);
    if (!skban->player)
        return (NULL);
    skban->free_it = true;
    clear();
    return (skban);
}