/*
** EPITECH PROJECT, 2021
** show_visual.c
** File description:
** function to display everything inside the main loop
*/

#include "sokoban.h"

char **show_visual(sokoban_t *skban, char **map, char *map_str, char ch)
{
    if (check_map_screen_dim(skban->map, skban->win) != false) {
        display_map(map, skban);
        ch = get_charinput();
        map = manage_input(ch, map, map_str, skban);
    } else {
        refresh();
        ch = getch();
    }
    return (map);
}