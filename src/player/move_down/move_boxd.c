/*
** EPITECH PROJECT, 2021
** move_boxd.c
** File description:
** function to move the box down
*/

#include "sokoban.h"

char **move_boxd(char **map, sokoban_t *skban)
{
    map[skban->player->pos.y + 2][skban->player->pos.x] =
    map[skban->player->pos.y + 1][skban->player->pos.x];
    map[skban->player->pos.y + 1][skban->player->pos.x] = SPACE;
    return (map);
}