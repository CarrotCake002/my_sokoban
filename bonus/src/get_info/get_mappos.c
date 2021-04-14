/*
** EPITECH PROJECT, 2021
** get_mappos.c
** File description:
** function to ge the position of the map in the screen
*/

#include "sokoban.h"

position_t get_mappos(map_t *map, win_t *win)
{
    map->pos.x = (win->size.x - map->width) / 2;
    map->pos.y = (win->size.y - map->length) / 2;
    return (map->pos);
}