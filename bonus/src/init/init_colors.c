/*
** EPITECH PROJECT, 2021
** init_colors.c
** File description:
** function to init colors needed to display them
*/

#include "sokoban.h"

void init_colors(void)
{
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
}