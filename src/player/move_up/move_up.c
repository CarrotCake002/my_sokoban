/*
** EPITECH PROJECT, 2021
** move_up.c
** File description:
** function to move the player up
*/

#include "sokoban.h"

char **move_up(char **map, sokoban_t *skban)
{
    if (map[skban->player->pos.y - 1][skban->player->pos.x] != '#'
        && skban->player->pos.y != 1) {
        if ((map[skban->player->pos.y - 2][skban->player->pos.x] != WALL
            && map[skban->player->pos.y - 2][skban->player->pos.x] != BOX
            && skban->player->pos.y - 1 != 1)
            && map[skban->player->pos.y - 1][skban->player->pos.x] == BOX) {
            map = move_boxu(map, skban);
        }
        if (map[skban->player->pos.y - 1][skban->player->pos.x] != WALL &&
            map[skban->player->pos.y - 1][skban->player->pos.x] != BOX) {
            map[skban->player->pos.y - 1][skban->player->pos.x] =
                map[skban->player->pos.y][skban->player->pos.x];
            map[skban->player->pos.y][skban->player->pos.x] = SPACE;
            skban->player->pos.y -= 1;
        }
        if (check_ifo(skban->player->pos.x,
            skban->player->pos.y + 1, skban->obj) == true)
            map[skban->player->pos.y + 1][skban->player->pos.x] = OBJ;
    }
    return (map);
}