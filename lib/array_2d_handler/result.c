/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** result.c
*/

#include "arr2d.h"

result_t ok(int *value)
{
    return (result_t) {1, 0, value, NULL};
}

result_t err(char *error)
{
    return (result_t) {0, 1, NULL, error};
}
