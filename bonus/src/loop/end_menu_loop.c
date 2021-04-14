/*
** EPITECH PROJECT, 2021
** end_menu_loop.c
** File description:
** loop for when the game finishes
*/

#include "sokoban.h"

int end_menu_loop(int end, char **map, char *map_str, sokoban_t *skban)
{
    char **menu = NULL;
    char ch = '\0';

    skban->player->score->moves = 0;
    menu = init_menu(menu, skban->free_it);
    if (!menu)
        return (ERROR);
    while (manage_end_input(end, ch, menu, skban) != LOSE) {
        clear();
        if (manage_end_input(end, ch, menu, skban) == CONTINUE) {
            map = my_str_to_word_array(map_str, map);
            //free_struct(skban);
            game_loop(map, map_str, skban);
        }
        refresh();
        ch = getch();
    }
    return (LOSE);
}