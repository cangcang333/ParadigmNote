/*************************************************************************
	> File Name: stack.c
	> Author: 
	> Mail: 
	> Created Time: Sun Oct 21 22:38:00 2018
 ************************************************************************/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "stack.h"

void StackNew(stack *s)
{
    s->loglength = 0;
    s->alloclength = 4;
    s->elems = malloc(4 * sizeof(int));

    assert(s->elems != NULL);
}

void StackDispose(stack *s)
{
    free(s->elems);
}

int main(int argc, char *argv[])
{
    
    return 0;
}
