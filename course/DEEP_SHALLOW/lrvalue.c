#include<stdio.h>

int doubleit(int *n);

int main()
{
    int x = 10;
    printf("The values = %d",doubleit(&x));
}

int doubleit(int *n)
{
    return 2*(*n);
}