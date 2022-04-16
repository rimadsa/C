#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");

    int a = 76;
    int* ptra = &a;
    printf("Value of a is %d\n", a);
    printf("Value of a is %d\n", *ptra);
    printf("Address of a is %x\n", ptra);
    printf("Address of a is %x\n", &a);

    printf("Address of a is %x\n", &ptra);
    printf("Value of a is %p\n", *ptra);
    printf("Address of a is %p\n", &ptra);

    int* ptr = NULL;
    printf("Value of NULL ptr is %p\n", ptr); // returns garbage values and null

    return 0;
}
