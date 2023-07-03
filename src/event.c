/*
** EPITECH PROJECT, 2022
** event.c
** File description:
** event.c
*/

#include "../include/struct.h"

int cyber_event(t_Structure *vex)
{
    while (sfRenderWindow_pollEvent(vex->cyber.cyber_w,
    &vex->cyber.cyber_e)) {
        if (vex->cyber.cyber_e.type == sfEvtClosed)
            sfRenderWindow_close(vex->cyber.cyber_w);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(vex->cyber.cyber_w);
        if (vex->cyber.cyber_e.type == sfEvtMouseButtonPressed) {
            if (vex->cyber.cyber_e.mouseButton.button == sfMouseLeft)
                kill_bird(vex);
        }
        if (vex->cyber.cyber_e.type == sfEvtMouseButtonPressed)
            cursor_quit(vex);
    }
    return (0);
}
