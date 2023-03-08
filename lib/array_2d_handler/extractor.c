/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** extractor.c
*/

#include "arr2d.h"

int **arr2d_extract_row(arr2d_t *array, unsigned int row)
{
    int **excerpt = NULL;

    if (array->nb_rows <= row)
        return NULL;
    excerpt = malloc(sizeof(int *) * (array->nb_cols + 1));
    for (unsigned int i = 0; i < array->nb_cols; i++)
        excerpt[i] = arr2d_get(array, row, i).value;
    excerpt[array->nb_cols] = NULL;
    return excerpt;
}

int **arr2d_extract_col(arr2d_t *array, unsigned int col)
{
    int **excerpt = NULL;

    if (array->nb_cols <= col)
        return NULL;
    excerpt = malloc(sizeof(int *) * (array->nb_rows + 1));
    for (unsigned int i = 0; i < array->nb_rows; i++)
        excerpt[i] = arr2d_get(array, i, col).value;
    excerpt[array->nb_rows] = NULL;
    return excerpt;
}

void arr2d_delete_excerpt(int **excerpt)
{
    free(excerpt);
}
