/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** find a prime number in the given integer
*/

#include "../include/my_call_lib_functions.h"

int my_find_prime_sup(int nb)
{
    int i = nb;

    if (my_is_prime(nb) == 0) {
        while (my_is_prime(i) == 0) {
            my_is_prime(i);
            i++;
        }
        return (i);
    }
    return (nb);
}
