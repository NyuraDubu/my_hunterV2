/*
** EPITECH PROJECT, 2022
** divers.c
** File description:
** divers.c
*/

#include "../include/struct.h"

void ingame_quit(t_Structure *vex)
{
    vex->wri.wri_f = sfFont_createFromFile("files/Amatic-Bold.ttf");
    vex->wri.wri_t = sfText_create();
    sfText_setFont(vex->wri.wri_t, vex->wri.wri_f);
    sfText_setCharacterSize(vex->wri.wri_t, 50);
    sfText_setPosition(vex->wri.wri_t, (sfVector2f){75, -5});
    sfText_setString(vex->wri.wri_t, "<- Quit");
}
