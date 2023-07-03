/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "../include/struct.h"

int main(int ac, char **av)
{
    t_Structure *vex = malloc(sizeof(t_Structure));

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        my_description();
    else if (ac != 1)
        return (84);
    else
        open_window(vex);
    free(vex);
    return (0);
}
