/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** main.c
*/

#include "lib/array_2d_handler/arr2d.h"

static void create_grid(int **line)
{
    for (int i = 0; line[i] != NULL; i++)
        *line[i] = '#';
    arr2d_delete_excerpt(line);
}

static void fill_with_numbers(arr2d_t *arr)
{
    char nbr = '0';

    for (int i = 1; arr2d_row_exists(arr, i); i += 2)
        for (int j = 1; arr2d_col_exists(arr, j); j += 2)
            arr2d_set(arr, i, j, nbr++);
}

int main(void)
{
    arr2d_t *array = arr2d_new(11, 31, '.');

    for (int i = 0; arr2d_row_exists(array, i); i += 2)
        create_grid(arr2d_extract_row(array, i));
    for (int i = 0; arr2d_col_exists(array, i); i += 2)
        create_grid(arr2d_extract_col(array, i));
    fill_with_numbers(array);
    arr2d_display_chars(array);
    arr2d_delete(array);
    return 0;
}
