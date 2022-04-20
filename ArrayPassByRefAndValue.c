#include <stdio.h>
#include <stdlib.h>

void function1(int array[])
{
    for(int i=0; i<4; i++)
    {
        printf("Value at %d is %d\n", i, array[i]);
    }
    array[2]= 345;
}
void function2(int* ptr)
{
    for(int i=0; i<4; i++)
    {
        printf("Value at %d is %d or %d\n", i, ptr[i], *(ptr+i));
    }
    *(ptr +1) = 345;
}
void function3(int array[2][2])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Value at %d,%d is %d \n", i, j,  array[i][j]);
        }
    }
}
int main()
{
    int arr[4] = {1,2,3,4};
    
    // //pass by value
    // function1(arr);
    // function1(arr);

    // pass by reference
    function2(arr);
    function2(arr);

    // passing multidimentional array to function
    int arr2[2][2] = {{1,2}, {3,4}};
    function3(arr2);
    return 0;
}