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
#include <string.h>

int search(int key, int array[], int size)
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
    int i;
    for (i = 0; i < n; i++)
    {
        printf("In lsearch2, i : %d\n", i);
        void *elemAddr = (char *)base + i * elemSize;
        if (cmpfn(key, elemAddr) == 0)
            return elemAddr;
    }
    
    return NULL;
}

int IntCmp(void *elem1, void *elem2)
{
    int *ip1 = elem1;
    int *ip2 = elem2;

    // Warning: *ip1 - *ip2 May overflow
    return (*ip1 - *ip2);
}

int StrCmp(void *vp1, void *vp2)
{
    char *s1 = *(char **)vp1;
    char *s2 = *(char **)vp2;

    return strcmp(s1, s2);
}

int main(int argc, char *argv[])
{
    int array[] = {4, 2, 3, 7, 11, 6};
    int size = 6;
    int number = 7;

    int *fund = lsearch2(&number, array, size, sizeof(int), IntCmp);
    if (fund == NULL)
        printf("not fund\n");
    else
        printf("shit, fund it\n");

    
    char *notes[] = {"Ab", "F#", "B", "6b", "D"};
    char *favoriteNote = "6b";
    char **fund2 = lsearch2(&favoriteNote, notes, 5, sizeof(char *), StrCmp);
    if (*fund2 == NULL)
        printf("not fund2\n");
    else
        printf("shit, fund2 it\n");

    return 0;
}
