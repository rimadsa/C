#include <stdio.h>
#define PI 3.14

int main()
{
    int a = 8;
    float b = 7.333;
    printf("The value of a is %d and value of b is %f\n", a , b); 
    printf("The value of b is %0.4f\n", b); //0.4 means 4 decimal spaces
    printf("||%18.4f||\n", b); // leave spaces at start and print total 18 chars
    printf("||%-18.4f||\n", b); // leave spaces at end and print total 18 chars


    const float c = 7.333; // cannot change value after declaring const
    //c = 123.45; - not allowed as c is const
    printf("The value of PI is %f\n", PI);
    //PI = 7.33; - not allowed as PI is const in #define
    return 0;
}
