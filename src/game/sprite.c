/*
** EPITECH PROJECT, 2022
** sprite.c
** File description:
** sprite.c
*/

#include "../../include/struct.h"

int game_sprite_cyber(t_Structure *vex)
{
    vex->cyber.cyber_s = sfSprite_create();
    vex->cyber.cyber_t =
    sfTexture_createFromFile("files/images/cyber.jpg", NULL);
    sfSprite_setTexture(vex->cyber.cyber_s,
    vex->cyber.cyber_t, sfTrue);
    return (0);
}

int sprite_bird(t_Structure *vex)
{
    vex->sheet.sheet_v = (sfVector2f) {-500, 310};
    vex->sheet.sheet_s = sfSprite_create();
    vex->sheet.sheet_t =
    sfTexture_createFromFile("files/images/sheet.png", NULL);
    sfSprite_setTexture(vex->sheet.sheet_s,
    vex->sheet.sheet_t, sfTrue);
    return (0);
}

void sprite_sheet(t_Structure *vex)
{
    vex->sheet.sheet_t1 = sfClock_getElapsedTime(vex->cyber.cyber_c);
    float sec = vex->sheet.sheet_t1.microseconds / 1000000.0;
    sfIntRect rect = {1, 1, 110 - 1, 93 - 1};
    if (sec > 0.2) {
        rect.left += 110;
        sfSprite_setTextureRect(vex->sheet.sheet_s, rect);
    }
    if (sec > 0.4) {
        rect.left += 110;
        sfSprite_setTextureRect(vex->sheet.sheet_s, rect);
        sfClock_restart(vex->cyber.cyber_c);
    }
}

void bird_move(t_Structure *vex)
{
    vex->sheet.sheet_t2 = sfClock_getElapsedTime(vex->cyber.cyber_c);
    float sec = vex->sheet.sheet_t2.microseconds / 1000000.0;
    if (sec > 0) {
        vex->sheet.sheet_v.x += 0.5;
        sfSprite_setPosition(vex->sheet.sheet_s, vex->sheet.sheet_v);
        if (vex->sheet.sheet_v.x >= 1920) {
            vex->sheet.sheet_v.x = -300;
            vex->sheet.sheet_v.y = rand() % 850;
            sfClock_restart(vex->cyber.cyber_c);
        }
    }
}

int quit_cross(t_Structure *vex)
{
    vex->red.red_s = sfSprite_create();
    vex->red.red_t =
    sfTexture_createFromFile("files/images/red_cross.png", NULL);
    sfSprite_setTexture(vex->red.red_s,
    vex->red.red_t, sfTrue);
    sfSprite_setScale(vex->red.red_s, (sfVector2f){0.1, 0.1});
    return (0);
}
