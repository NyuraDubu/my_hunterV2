/*
** EPITECH PROJECT, 2022
** cursor.c
** File description:
** cursor.c
*/

#include "../include/struct.h"

int crosshair(t_Structure *vex)
{
    vex->cursor.cross_s = sfSprite_create();
    vex->cursor.cross_t =
    sfTexture_createFromFile("files/images/crosshair.png", NULL);
    sfSprite_setTexture(vex->cursor.cross_s,
    vex->cursor.cross_t, sfTrue);
    sfSprite_setScale(vex->cursor.cross_s, (sfVector2f){1, 1});
    return (0);
}

int crosshair_pos(t_Structure *vex)
{
    vex->cursor.cross_vf.x = sfMouse_getPosition((sfWindow *)vex->
    cyber.cyber_w).x -15;
    vex->cursor.cross_vf.y = sfMouse_getPosition((sfWindow *)vex->
    cyber.cyber_w).y -15;
    sfSprite_setPosition(vex->cursor.cross_s, vex->cursor.cross_vf);
    return (0);
}

void kill_bird(t_Structure *vex)
{
    vex->cursor.cross_vi = sfMouse_getPosition((sfWindow*)vex->cyber.cyber_w);
    if ((vex->cursor.cross_vi.x >= vex->sheet.sheet_v.x &&
    vex->cursor.cross_vi.x <= (vex->sheet.sheet_v.x + 110))) {
        if ((vex->cursor.cross_vi.y >= vex->sheet.sheet_v.y &&
        vex->cursor.cross_vi.y <= (vex->sheet.sheet_v.y + 93))) {
            vex->sheet.sheet_v.x = -300;
            vex->sheet.sheet_v.y = rand() % 850;
            sfClock_restart(vex->cyber.cyber_c);
        }
    }
}

void cursor_quit(t_Structure *vex)
{
    vex->cursor.cross_vi = sfMouse_getPosition((sfWindow*)vex->cyber.cyber_w);
    if ((vex->cursor.cross_vi.x >= vex->red.red_v.x &&
    vex->cursor.cross_vi.x <= (vex->red.red_v.x + 57))) {
        if ((vex->cursor.cross_vi.y >= vex->red.red_v.y &&
        vex->cursor.cross_vi.y <= (vex->red.red_v.y + 57))) {
            sfRenderWindow_close(vex->cyber.cyber_w);
        }
    }
}
