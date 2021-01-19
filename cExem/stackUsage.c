
#include "stackUsage.h"

Stack *CreateStack()
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    
    stack->data->nextNode = NULL;
    stack->data->node.i = 0;
    stack->data->type = t_char;
    return stack;
}

void DeleteStack(Stack *s)
{
    DeleteList(s->data);
    free(s);
}

void StackPush(Stack *s, Type item,T type)
{ 
    LinkedList *l = s->data->nextNode;
    while (l)
    {
        l = l->nextNode;
    }
    s->data->nextNode = (LinkedList *)malloc(sizeof(LinkedList));
        s->data->node = item;
            s->data->type = type;
            s->data->nextNode = NULL;
    
}

Type StackPop(Stack *s)
{
    LinkedList *l = s->data->nextNode;
    while (l->nextNode)
    {
        l = l->nextNode;
    }
    Type result = l->nextNode->node;
    free(l->nextNode);
    l->nextNode = NULL;
    return result;
}

int StackGetLastError(Stack *s)
{
    return 0;
}

void DeleteList(LinkedList *l)
{
    while (l->nextNode)
    {
        DeleteList(l->nextNode);
    }
    free(l);
}

