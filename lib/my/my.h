/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my_ls
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include <dirent.h>
    #include <sys/types.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <stdint.h>
    #include <sys/sysmacros.h>
    #include <unistd.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include<stdlib.h>
    #include <fcntl.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/Texture.h>
    #include <SFML/Graphics/Sprite.h>
    #include <stdlib.h>
    #include <SFML/System.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Export.h>

typedef int (*factors)(va_list);
typedef struct type_t {
    char c;
    factors function;
} type_t;
typedef struct struct_var {
    int n;
    char *tmpbuffer;
    char *path;
    int i;
    int y;
    int x;
    int cmp;
    int cmp2;
    int fd;
    int verify;
    int j;
    int y1;
    int x1;
    char *buffer;
    char *new_buffer;
    char **map;
    int **int_map;
    int **int_new_map;
} struct_t;
struct_t  *init_struct(char **argv);
void bob2(struct_t *var);
int type_majf(va_list list);
int display_1(int x, int cmp, int len);
int last_num(double *x, int *cmp);
int type_p(va_list list);
int type_e(va_list list);
int type_maje(va_list list);
int my_scienty(double x);
int my_scienty_maj(double x);
int type_x(va_list list);
int type_majx(va_list list);
int type_o(va_list list);
int type_b(va_list list);
int type_u(va_list list);
int type_f(va_list list);
int parse_tab(char c, va_list list);
int my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_putnbr_base(long long nbr, char const *base);
int my_getnbr_base(char const *str, char const *base);
int my_printf(const char *format, ...);
int my_float(double x, int precision);
int verify(double x, int len);
int neg(double *x, int *left, int *len);
int execute(float right, int cmp);
char *my_strndup(char const *src, int n);
char **my_str_to_word_array(char *str);
int count_len(char *str);
int count_alphanum(char *str);
int count_len(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_printf(char const *format, ...);

#endif
