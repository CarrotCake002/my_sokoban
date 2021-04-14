/*
** EPITECH PROJECT, 2021
** check_up_right.c
** File description:
** function to check if all X's are blocked
*/

#include "sokoban.h"

int check_left_up(char **map, int x, int y)
{
    if ((map[y + 1][x] == WALL && map[y][x - 1] == WALL)
        || (map[y - 1][x] == BOX && map[y][x - 1] == WALL)
        || (map[y - 1][x] == BOX && map[y][x - 1] == BOX)
        || (map[y - 1][x] == WALL && map[y][x - 1] == BOX)
        || (y == 1 && map[y][x - 1] == BOX)
        || (y == 1 && map[y][x - 1] == WALL)
        || (y == 1 && x == 0)
        || (map[y - 1][x] == BOX && x == 0)
        || (map[y - 1][x] == WALL && x == 0))
        return (1);
    return (0);
}