/*
** EPITECH PROJECT, 2021
** move_boxu.c
** File description:
** function to move the box up
*/

#include "sokoban.h"

char **move_boxu(char **map, sokoban_t *skban)
{
    map[skban->player->pos.y - 2][skban->player->pos.x] =
    map[skban->player->pos.y - 1][skban->player->pos.x];
    map[skban->player->pos.y - 1][skban->player->pos.x] = SPACE;
    return (map);
}