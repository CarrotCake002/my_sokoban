/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** calculate the number "nb" to
** the power 'p' using a recursive function
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 0;

    if (p == 0)
        return (nb);
    else if (p < 0)
        return (0);
    else
        result = nb * my_compute_power_rec(nb, p - 1);
    return (result);
}
