/*
** EPITECH PROJECT, 2021
** check_nb_args.c
** File description:
** function to check the nb of args
*/

#include "sokoban.h"

int check_args(int ac, char **av)
{
    if (ac != 2)
        return (ERROR);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        usage();
        return (ERROR);
    }
    return (0);
}