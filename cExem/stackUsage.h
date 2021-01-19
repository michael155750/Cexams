#pragma once
#include "stack.h"
#include <stdlib.h>

/**
* @file "stackUsage.h"
*/

/**
 * @brief create a new stack
 * @return a pointer to the stack
*/
Stack *CreateStack();

/**
 * @brief delete a stack
 * @param  stack to delete
*/
void DeleteStack(Stack *s);

/**
 * @brief push an item to the stack
 * @param s the stack
 * @param item the item
*/
void StackPush(Stack *s, Type item, T type);

/**
 * @brief pop an item from the stack
 * @return the item
*/
Type StackPop(Stack *s);

/**
 * @brief Get last error code 
 * @param s the stack
 * @return error code
*/
int StackGetLastError(Stack *s);