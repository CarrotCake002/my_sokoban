/*
** EPITECH PROJECT, 2021
** move_right.c
** File description:
** function to move the player right
*/

#include "sokoban.h"

char **move_right(char **map, sokoban_t *skban)
{
    if (map[skban->player->pos.y][skban->player->pos.x + 1] != '#'
        && map[skban->player->pos.y][skban->player->pos.x + 1] != '\0') {
        if ((map[skban->player->pos.y][skban->player->pos.x + 2] != WALL
            && map[skban->player->pos.y][skban->player->pos.x + 2] != BOX)
            && map[skban->player->pos.y][skban->player->pos.x + 1] == BOX
            && map[skban->player->pos.y][skban->player->pos.x + 2] != '\0') {
            map = move_boxr(map, skban);
        }
        if (map[skban->player->pos.y][skban->player->pos.x + 1] != WALL &&
            map[skban->player->pos.y][skban->player->pos.x + 1] != BOX) {
            map[skban->player->pos.y][skban->player->pos.x + 1] =
                map[skban->player->pos.y][skban->player->pos.x];
            map[skban->player->pos.y][skban->player->pos.x] = SPACE;
            skban->player->pos.x += 1;
        }
        if (check_ifo(skban->player->pos.x - 1,
            skban->player->pos.y, skban->obj) == true)
            map[skban->player->pos.y][skban->player->pos.x - 1] = OBJ;
    }
    return (map);
}