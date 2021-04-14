/*
** EPITECH PROJECT, 2021
** sokoban.c
** File description:
** general functions for sokoban
*/

#include "sokoban.h"

int sokoban(int ac, char **av)
{
    char *map = NULL;
    char **map_array = NULL;
    int result = 0;

    if (check_args(ac, av) != 0)
        return (ERROR);
    map = init_all(av);
    if (!map || error_handling(map) != 0)
        return (ERROR);
    map_array = my_str_to_word_array(map, map_array);
    if (!map_array)
        return (ERROR);
    result = main_loop(map_array, map);
    free(map);
    endwin();
    return (result);
}