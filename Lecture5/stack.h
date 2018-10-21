/*************************************************************************
	> File Name: stack.h
	> Author: 
	> Mail: 
	> Created Time: Sun Oct 21 22:26:04 2018
 ************************************************************************/

#ifndef _STACK_H
#define _STACK_H

typedef struct {
    int *elems;
    int loglength;
    int alloclength;
} stack;

void StackNew(stack *s);
void StackDispose(stack *s);
void StackPush(stack *s, int value);
int StackPop(stack *s);
#endif
