/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** result.c
*/

#include "arr2d.h"

result_t make_ok(int *value)
{
    result_t result = {1, 0, value, NULL};

    return result;
}

result_t make_err(char *error)
{
    result_t result = {1, 0, NULL, error};

    return result;
}
