/*
** EPITECH PROJECT, 2022
** window.c
** File description:
** window.c
*/

#include "../../include/struct.h"

int open_window(t_Structure *vex)
{
    sfVideoMode game_mode = {1920, 1080, 32};
    vex->cyber.cyber_w =
    sfRenderWindow_create(game_mode, "Cyberpunk", sfFullscreen, NULL);
    vex->cyber.cyber_c = sfClock_create();
    sfRenderWindow_setFramerateLimit(vex->cyber.cyber_w, 0);
    sfRenderWindow_setMouseCursorVisible(vex->cyber.cyber_w, sfFalse);
    game_sprite_cyber(vex);
    sprite_bird(vex);
    crosshair(vex);
    quit_cross(vex);
    ingame_quit(vex);
    while (sfRenderWindow_isOpen(vex->cyber.cyber_w)) {
        cyber_event(vex);
        boucle_cyber(vex);
    }
    sfRenderWindow_destroy(vex->cyber.cyber_w);
    return (0);
}

int boucle_cyber(t_Structure *vex)
{
    sfRenderWindow_drawSprite(vex->cyber.cyber_w, vex->cyber.cyber_s, NULL);
    crosshair_pos(vex);
    bird_move(vex);
    sfRenderWindow_drawSprite(vex->cyber.cyber_w, vex->sheet.sheet_s, NULL);
    sfRenderWindow_drawSprite(vex->cyber.cyber_w, vex->red.red_s, NULL);
    sfRenderWindow_drawText(vex->cyber.cyber_w, vex->wri.wri_t, NULL);
    sfRenderWindow_drawSprite(vex->cyber.cyber_w, vex->cursor.cross_s, NULL);
    sfRenderWindow_display(vex->cyber.cyber_w);
    sprite_sheet(vex);
    return (0);
}
