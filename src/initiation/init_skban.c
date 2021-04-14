/*
** EPITECH PROJECT, 2021
** init_skban.c
** File description:
** function to init the skban structure
*/

#include "sokoban.h"

sokoban_t *init_skban(sokoban_t *skban, char **map)
{
    skban = malloc(sizeof(sokoban_t));
    if (!skban)
        return (NULL);
    skban->obj = get_obj(map, skban->obj);
    if (!skban->obj)
        return (NULL);
    skban->free_it = false;
    keypad(initscr(), TRUE);
    return (skban);
}