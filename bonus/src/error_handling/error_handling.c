/*
** EPITECH PROJECT, 2021
** error_handling.c
** File description:
** file to call functions to check errors
*/

#include "sokoban.h"

int error_handling(char *map)
{
    if (check_chars(map) != true)
        return (ERROR);
    if (check_player_exist(map) != true)
        return (ERROR);
    if (check_boxes_objs(map) != true)
        return (ERROR);
    return (0);
}