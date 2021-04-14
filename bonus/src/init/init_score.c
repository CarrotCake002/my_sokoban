/*
** EPITECH PROJECT, 2021
** init_score.c
** File description:
** function to initialize the score
*/

#include "sokoban.h"

score_t *init_score(score_t *score)
{
    score = malloc(sizeof(score_t));
    if (!score)
        return (NULL);
    score->moves = 0;
    return (score);
}