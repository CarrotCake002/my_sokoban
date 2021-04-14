/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** check if a given number is a prime number
*/

int add_count(int nb)
{
    int count = 2;

    while (count < nb) {
        if  (nb % count == 0)
            return (0);
        count++;
    }
    return (nb);
}

int my_is_prime(int nb)
{
    if (nb == 0 || nb == 1)
        return (0);
    if (nb > 0)
        nb = add_count(nb);
    else
        return (0);
    return (1);
}
