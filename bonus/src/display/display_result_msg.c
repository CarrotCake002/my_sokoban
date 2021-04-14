/*
** EPITECH PROJECT, 2021
** display_result_msg.c
** File description:
** function to display a message at the end of the game
*/

#include "sokoban.h"

void display_result_message(int result)
{
    if (result == 0) {
        my_putstr("You win the game !\n");
        my_putstr("Don't forget to try other maps :)\n");
    } else if (result == 1) {
        my_putstr("You lost this game !\n");
        my_putstr("You can do it again or try an easier map :)\n");
    } else
        my_putstr("Error\n");
}