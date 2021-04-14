/*
** EPITECH PROJECT, 2021
** free_menu.c
** File description:
** functions to free the menu
*/

#include "sokoban.h"

void free_menu(char **menu)
{
    int i = 0;

    while (i < 3) {
        free(menu[i]);
        i++;
    }
    free(menu);
}