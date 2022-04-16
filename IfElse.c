#include <stdio.h>

void checkPassed(int passed)
{
    if(passed == 1)
    {
        printf("You passed Maths!");
    }else if (passed == 2)
    {
        printf("You passed Science!");
    }else if (passed == 3)
    {
        printf("You passed Maths and Science!");
    }else
    {
        printf("You did not pass!");
    }
}

void checkPassedUsingSwitch(int passed)
{
    switch (passed)
    {
    case 1:
        printf("You passed Maths!");
        break;
    case 2:
        printf("You passed Science!");
        break;
    case 3:
        printf("You passed Maths and Science!");
        break;    
    default:
        printf("You did not pass!");
        break;
    }
}

int main()
{
    int passed;

    printf("Enter exams passed:\n1 : for passing Maths\n2 : for passing Science\n3 : for passing Maths and Science\nothers : None\n");

    scanf("%d", &passed);
    checkPassed(passed);
    printf("\n\n");
    checkPassedUsingSwitch(passed);
    return 0;
}
