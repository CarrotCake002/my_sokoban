/*
** EPITECH PROJECT, 2020
** my_capitalize
** File description:
** change all letters to capital letters
*/

char *my_capitalize(char *str)
{
    int i = 0;
    int d = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i++;
    }
    while (str[i] != '\0') {
        d = i + 1;
        if (str[i] >= 97 && str[i] <= 122 && str[d] && str[d] >= 0)
            str[i] = str[i] - 32;
        if (str[0] >= 97 && str[0] <= 122)
            str[0] = str[0] - 32;
        i++;
    }
    return (str);
}
