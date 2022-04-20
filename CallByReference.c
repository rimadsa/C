#include<stdio.h>
#include<stdlib.h>

void CallByValue(int a, int b)
{
    int sum = a + b;
    printf("Sum using call by Value is: %d\n", sum);
}
void CallByReference(int* a, int* b)
{
    int sum = *a + *b;
    printf("Sum using call by Refernce is: %d\n", sum);
}

int main()
{
    int a = 2;
    int b = 3;
    CallByValue(a,b);
    CallByReference(&a, &b);
    return 0;
}