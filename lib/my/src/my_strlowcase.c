/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** changes all upcase character to lowcase
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'A') || str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
            i++;
        }
    }
    return (str);
}
