/*************************************************************************
	> File Name: swap.c
	> Author: 
	> Mail: 
	> Created Time: 三  5/30 08:25:27 2018
 ************************************************************************/

#include <stdio.h>
#include <string.h>

// generic swap two values function

void swap0(int *ap, int *bp)
{
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
}

void swap1(void *vp1, void *vp2, int size)
{
    char buffer[size];
    memcpy(buffer, vp1, size);
    memcpy(vp1, vp2, size);
    memcpy(vp2, buffer, size);
}

int main(int argc, char *argv[])
{
    int i = 44;
    int s = 5;
    swap1(&i, &s, sizeof(int));
    printf("i = %d and s = %d\n", i, s);
    swap0(&i, &s);
    printf("i = %d and s = %d\n", i, s);
}
