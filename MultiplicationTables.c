
#include <stdio.h>

void multiply(int number)
{
    printf("Multiplication Table of %d: \n", number);
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", number, i, (number*i));
    }
}

int main()
{
    int number;
    printf("Enter Number for multiplication table:\n");
    scanf("%d", &number);

    multiply(number);
    return 0;
}
