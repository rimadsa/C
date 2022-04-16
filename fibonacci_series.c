#include <stdio.h>

void print_fibonnaci_iterative(int n)
{
    int a = 0, b=1, c=0;
    printf("%d, %d,", a, b);
    for(int i =3; i<=n; i++)
    {
        c=a+b;
        printf(", %d", c);
        a=b;
        b=c;
    }
}
int fibonnaci_recursive(int n)
{
    if(n==0)
    {
        printf(", %d", n);
        return 0;
    }else if(n==1)
    {
        printf(", %d", n);
        return 1;
    }else{
        return 0;
    }
    while(n != 1 || n != 1){
       return fibonnaci_recursive(n-1)+fibonnaci_recursive(n-2);
        
    }
}

int main()
{
    int n;
    printf("Enter number of fibonnaci numbers:");
    scanf("%d", &n);
    print_fibonnaci_iterative(n);

    //fibonnaci_recursive(n);
    return 0;
}
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181,
