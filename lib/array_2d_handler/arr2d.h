/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** arr2d.h
*/

#ifndef ARRAY_2D_HANDLER
    #define ARRAY_2D_HANDLER

    #include <stdlib.h>

typedef struct {
    int is_ok;
    int is_err;
    int *value;
    char *error;
} result_t;

// Result handlers
result_t ok(int *value);
result_t err(char *error);

typedef struct {
    unsigned int nb_rows;
    unsigned int nb_cols;
    int *data;
} arr2d_t;

// Array 2d handlers
arr2d_t *arr2d_new(unsigned int nb_rows, unsigned int nb_cols, int fill_with);
void arr2d_delete(arr2d_t *array);

// Getters
result_t arr2d_get(arr2d_t *array, unsigned int row, unsigned int col);
result_t arr2d_get_above(arr2d_t *array, unsigned int row, unsigned int col);
result_t arr2d_get_below(arr2d_t *array, unsigned int row, unsigned int col);
result_t arr2d_get_right(arr2d_t *array, unsigned int row, unsigned int col);
result_t arr2d_get_left(arr2d_t *array,  unsigned int row, unsigned int col);

// Setter
int arr2d_set(arr2d_t *array, unsigned int row, unsigned int col, int value);

// Tools
int arr2d_exists(arr2d_t *array, unsigned int row, unsigned int col);
void arr2d_display_ints(arr2d_t *array);
void arr2d_display_chars(arr2d_t *array);

#endif // !ARRAY_2D_HANDLER
