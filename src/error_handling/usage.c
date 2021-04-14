/*
** EPITECH PROJECT, 2021
** usage.c
** File description:
** function for the '-h'
*/

#include "sokoban.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map file representing the warehouse map, ");
    my_putstr("containing '#' for walls, \n");
    my_putstr("         'P' for the player, ");
    my_putstr("'X' for boxes and 'O' for storage locations.\n");
}