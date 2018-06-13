/*************************************************************************
	> File Name: callback_test.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jun 14 00:56:48 2018
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int A = *((int *)a);
    int B = *((int *)b);
//    return (A - B);
//    return (B - A);
    return (abs(A) - abs(B));
}

int main(int argc, char *argv[])
{
    int i;
    int A[] = {-31, 22, -1, 50, -6, 4};
    qsort(A, 6, sizeof(int), compare);
    for (i = 0; i < 6; i++)
        printf("%d ", A[i]);

    printf("\n");

    return 0;
}
