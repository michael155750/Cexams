#pragma once
#include <stdio.h>
#include "stackUsage.h"

/**
 * @brief checking the stackUsage functions
 * @return 
*/
int main()
{
    Stack *s;
    s = CreateStack();
    s->data->type = t_int;
    Type a,b;
    a.i = 55;
    StackPush(s,a,t_int);
    b.i = StackPop(s);
    return 0;
}