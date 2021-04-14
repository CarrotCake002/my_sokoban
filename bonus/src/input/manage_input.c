/*
** EPITECH PROJECT, 2021
** manage_input.c
** File description:
** function to manage the keyboard input
*/

#include "sokoban.h"

char **manage_input(int ch, char **map, char *map_str, sokoban_t *skban)
{
    if (ch == SPACE) {
        skban->player->pos = skban->player->pos_cpy;
        free(map);
        map = my_str_to_word_array(map_str, map);
        skban->player->score->moves = 0;
    }
    if (ch == 5)
        move_right(map, skban->player, skban->obj);
    if (ch == 2)
        move_down(map, skban->player, skban->obj);
    if (ch == 4)
        move_left(map, skban->player, skban->obj);
    if (ch == 3)
        move_up(map, skban->player, skban->obj);
    if (ch == ESC) {
        if (manage_menu(skban) != CONTINUE) {
            return (NULL);
        }
    }
    return (map);
}