/*
** EPITECH PROJECT, 2021
** init_menu.c
** File description:
** function to initialize what is needed int the menu
*/

#include "sokoban.h"

char **init_menu(char **menu, bool free_it)
{
    int i = 0;

    (void)free_it;
    menu = malloc(sizeof(char *) * 3);
    if (!menu)
        return (NULL);
    while (i < 3) {
        menu[i] = malloc(sizeof(char) * 2);
        if (!menu[i])
            return (NULL);
        i++;
    }
    menu[0][0] = CURSOR;
    menu[0][1] = '\0';
    menu[1][0] = SPACE;
    menu[1][1] = '\0';
    menu[2] = NULL;
    return (menu);
}