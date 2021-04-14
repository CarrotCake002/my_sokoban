/*
** EPITECH PROJECT, 2021
** move_boxr.c
** File description:
** function to move the box right
*/

#include "sokoban.h"

char **move_boxr(char **map, sokoban_t *skban)
{
    map[skban->player->pos.y][skban->player->pos.x + 2] =
    map[skban->player->pos.y][skban->player->pos.x + 1];
    map[skban->player->pos.y][skban->player->pos.x + 1] = SPACE;
    return (map);
}