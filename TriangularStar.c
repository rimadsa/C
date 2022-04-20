#include<stdio.h>
#include<stdlib.h>


////////////////////////////////////////////////////////////////
/*
    *****
    ****
    ***
    **
    *
*/

int TriangularStar(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

////////////////////////////////////////////////////////////////
/*
    *****
    ****
    ***
    **
    *
*/
int ReverseTriangularStar(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


int main()
{
    int n = 5;
    TriangularStar(n);
    ReverseTriangularStar(n);
    return 0;
}
