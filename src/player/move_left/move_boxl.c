/*
** EPITECH PROJECT, 2021
** move_boxl.c
** File description:
** function to move the box left
*/

#include "sokoban.h"

char **move_boxl(char **map, sokoban_t *skban)
{
    map[skban->player->pos.y][skban->player->pos.x - 2] =
    map[skban->player->pos.y][skban->player->pos.x - 1];
    map[skban->player->pos.y][skban->player->pos.x - 1] = SPACE;
    return (map);
}