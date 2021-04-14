/*
** EPITECH PROJECT, 2021
** check_win_lose.c
** File description:
** function to check if it's a win or a lost
*/

#include "sokoban.h"

int check_win_lose(char **map, sokoban_t *skban)
{
    if (check_win_condition(map, skban) == true) {
        display_map(map, skban);
        refresh();
        return (WIN);
    }
    if (check_lose_condition(map, skban) == true) {
        display_map(map, skban);
        refresh();
        return (LOSE);
    }
    return (CONTINUE);
}