/*
** EPITECH PROJECT, 2021
** check_lose_condition.c
** File description:
** file to check if the player lost the game
*/

#include "sokoban.h"

bool check_single_box(char **map, int x, int y)
{
    int wall = 0;

    wall += check_up_right(map, x, y);
    wall += check_right_down(map, x, y);
    wall += check_down_left(map, x, y);
    wall += check_left_up(map, x, y);
    if (wall != 0)
        return (true);
    return (false);
}

int check_lose_lines(char **map, int x_misplaced, int y)
{
    int x = 0;

    while (map[y][x] != '\0') {
        if (map[y][x] == BOX) {
            if (check_single_box(map, x, y) == true)
                x_misplaced++;
        }
        x++;
    }
    return (x_misplaced);
}

bool check_lose_condition(char **map, sokoban_t *skban)
{
    int y = 0;
    int x_misplaced = 0;

    while (map[y] != NULL) {
        x_misplaced = check_lose_lines(map, x_misplaced, y);
        y++;
    }
    if (x_misplaced == skban->obj[0].count)
        return (true);
    puts("lola");
    return (false);
}