/*
** EPITECH PROJECT, 2018
** __pretty_much_accurate__runner
** File description:
** main
*/

#include "headers.h"

vec2 vec2_add(vec2 a, vec2 b)
{
    return ((vec2){a.x + b.x, a.y + b.y});
}

vec2 vec2_sub(vec2 a, vec2 b)
{
    return ((vec2){a.x - b.x, a.y - b.y});
}