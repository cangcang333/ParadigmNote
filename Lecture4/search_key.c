/*************************************************************************
	> File Name: search_key.c
	> Author: 
	> Mail: 
	> Created Time: 三  5/30 08:07:29 2018
 ************************************************************************/
/* the generic way to find the key 
 * in an array.
 */
#include <stdio.h>

void search(int key, int array[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i;
    }

    return -1;
}

// linear search
void *lsearch(void *key, void *base, int n, int elemSize)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        void *elemAddr = (char *)base + i * elemSize;
        if (memcpy(key, elemAddr, elemSize) == 0)
            return elemAddr;
    }

    return NULL;
}


void *lsearch2(void *key, void *base, int n, int elemSize, int (*cmpfn)(void *, void *))
{
    for (int i = 0; i < n; i++)
    {
        
    }
    
}

