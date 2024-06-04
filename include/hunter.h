/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myhunter-xavier.huet
** File description:
** my
*/

#ifndef HUNTER_H_
    #define HUNTER_H_
    #include <SFML/Config.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/Texture.h>
    #include <SFML/Graphics/Sprite.h>
    #include <stdlib.h>
    #include <SFML/System.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Export.h>
    #include <SFML/Graphics.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/System/Vector2.h>
    #include <stddef.h>
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics/FontInfo.h>
    #include <SFML/Graphics/Glyph.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/System/InputStream.h>
    #include <stddef.h>

typedef struct struct_hunt_t {
    sfClock *clock;
    sfTime time ;
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vector;
    sfEvent event;
    sfIntRect rect;
    sfIntRect rect_life;
    sfVector2f restart;
    sfSprite *background;
    sfVector2f pos_sprite;
    sfSprite *life;
    int loose;
    int score;
    float seconds ;
    int error;
    int verify;
} stock_t;

stock_t  *bob(int argc, char **argv);
sfRenderWindow *create_window(unsigned int width, unsigned int height);
void manage_mouse_click(sfMouseButtonEvent event, stock_t *all);
void close_window(sfRenderWindow *window);
void analyse_events(sfRenderWindow *window, sfEvent event, stock_t *all);
void move_rect(sfIntRect *rect, int offset, int max_value);
sfVector2f update_struct_1(sfVector2f vector);
sfIntRect update_struct_2(sfIntRect rect);
void sprite_create(stock_t *all);
void animate_sprite(stock_t *all);
void destroy_all(stock_t *all);
void display_classic(stock_t *all);
int find_position_x(sfSprite *sprite);
void create_all(stock_t *all);
void background_create(stock_t *all);
int find_position_y(sfSprite *sprite);
int verify_flag_h(int argc, char **argv);
int flag_h_handler(void);
int error_handler(int argc, char **argv);
void life_create(stock_t *all);
void animate_life(stock_t *all);
void display_score(stock_t *all);
char *int_to_str(int nb);
int nb_digits(long long int nb);
char *my_revstr(char *str);
void boucle(int i, int p, char *str);

#endif
