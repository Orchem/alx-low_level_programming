#ifndef MAIN_H
#define MAIN_H
char *create_array(unsigned int size, char c);
void _memset(char *s, char b, unsigned int n);
char *_strdup(char *str);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
#endif
