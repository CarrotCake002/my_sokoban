/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** Day4 task02
*/

void my_putchar(char c);

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}
