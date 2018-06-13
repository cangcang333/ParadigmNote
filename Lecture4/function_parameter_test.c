/*************************************************************************
	> File Name: function_parameter_test.c
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 13 23:12:25 2018
 ************************************************************************/

#include <stdio.h>

void printHello(char *name)
{
    printf("Hello, %s\n", name);
}
int add(int a, int b)
{
    return (a + b);
}

void A()
{
    printf("Shit\n");
}
void B(void (*ptr)())
{
    ptr();
}


int main(int argc, char *argv[])
{
    int c;
    int (*p)(int, int);
//    p = &add;
//    c = (*p)(12, 23);
    p = add;
    c = p(18, 27);
    printf("c = %d\n", c);

    void (*ptr)(char *);
    ptr = printHello;
    ptr("Danial");


    void (*ptr2)() = A;
    B(ptr2);

    B(A);    /* A is a callback function */

    return 0;
}

