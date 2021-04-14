/*
** EPITECH PROJECT, 2020
** my_putnbr.c
** File description:
** function that displays a number
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int d = 0;

    if (nb <0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 10) {
        d = (nb % 10);
        nb = (nb - d) / 10;
        my_put_nbr(nb);
        my_putchar(48 + d);
    } else
        my_putchar(48 + nb % 10);
    return (nb);
}
