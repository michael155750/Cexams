#pragma once
/**
* @file linkesList.h
*/

typedef union type_t
{
    long double d;
    long long i;
}Type;

typedef enum T_t
{
    t_char,
    t_int,
    t_double
}
T;
/**
*@brief a struck represent a 
*linked list
*/
typedef struct linkedList_t
{
    Type node;
    LinkedList *nextNode;
    T type;
}LinkedList;

