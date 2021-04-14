/*
** EPITECH PROJECT, 2021
** get_charinput.c
** File description:
** function to get the input n the main loop
*/

#include "sokoban.h"

char get_charinput(void)
{
    int ch = 0;

    refresh();
    ch = getch();
    return (ch);
}