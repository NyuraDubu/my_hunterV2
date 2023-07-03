/*
** EPITECH PROJECT, 2022
** struct.h
** File description:
** struct.h
*/

#ifndef STRUCT_H
    #define STRUCT_H

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>

typedef struct s_Cyber {
    sfRenderWindow *cyber_w;
    sfSprite *cyber_s;
    sfTexture *cyber_t;
    sfVector2f cyber_v;
    sfEvent cyber_e;
    sfIntRect cyber_i;
    sfClock *cyber_c;
    sfTime cyber_ti;
    float sec;
} t_Cyber;

typedef struct s_Crosshair {
    sfSprite *cross_s;
    sfTexture *cross_t;
    sfVector2f cross_vf;
    sfVector2i cross_vi;
} t_Crosshair;

typedef struct s_Redcross {
    sfSprite *red_s;
    sfTexture *red_t;
    sfVector2f red_v;
} t_Redcross;

typedef struct s_Sheet {
    sfSprite *sheet_s;
    sfTexture *sheet_t;
    sfVector2f sheet_v;
    sfTime sheet_t1;
    sfTime sheet_t2;
    sfClock *sheet_c;
} t_Sheet;

typedef struct s_Write {
    sfText *wri_t;
    sfFont *wri_f;
    sfVector2f wri_v;
} t_Write;

typedef struct s_Structure {
    t_Cyber cyber;
    t_Crosshair cursor;
    t_Redcross red;
    t_Sheet sheet;
    t_Write wri;
} t_Structure;

int main(int ac, char **av);
int cyber_event(t_Structure *vex);
int game_sprite_cyber(t_Structure *vex);
int open_window(t_Structure *vex);
int boucle_cyber(t_Structure *vex);
int my_description(void);
int crosshair(t_Structure *vex);
int crosshair_pos(t_Structure *vex);
int sprite_bird(t_Structure *vex);
void sprite_sheet(t_Structure *vex);
void bird_move(t_Structure *vex);
void kill_bird(t_Structure *vex);
int quit_cross(t_Structure *vex);
void cursor_quit(t_Structure *vex);
void ingame_quit(t_Structure *vex);

#endif /* STRUCT_H */
