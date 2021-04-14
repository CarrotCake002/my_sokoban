/*
** EPITECH PROJECT, 2021
** check_up_right.c
** File description:
** function to check if all X's are blocked
*/

#include "sokoban.h"

int check_right_down(char **map, int x, int y)
{
    if ((map[y + 1][x] == WALL && map[y][x + 1] == WALL)
        || (map[y + 1][x] == BOX && map[y][x + 1] == WALL)
        || (map[y + 1][x] == BOX && map[y][x + 1] == BOX)
        || (map[y + 1][x] == WALL && map[y][x + 1] == BOX)
        || (!map[y + 2] && map[y][x + 1] == '\0')
        || (!map[y + 2] && map[y][x + 1] == BOX)
        || (!map[y + 2] && map[y][x + 1] == WALL)
        || (map[y + 1][x] == BOX && map[y][x + 1] == '\0')
        || (map[y + 1][x] == WALL && map[y][x + 1] == '\0'))
        return (1);
    return (0);
}