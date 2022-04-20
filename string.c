#include <stdio.h>
#include <stdlib.h>

void printstring(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        printf("character is %c\n", str[i]);
        i++;
    }
    
}
void printstr(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    
}

int main()
{
    char str0[] = {'h', 'a','r', 'r', 'y'};// not valid string
    char str[] = {'h', 'a','r', 'r', 'y', '\0'};// valid string
    char str3[] = "harry";
    char str4[5] = "harry"; //invalid
    //printstring(str0);
    //printstring(str);
    //printstring(str3);
    //printstring(str4);// will print incorrect output

    // taking user input
    char str5[30];
    gets(str5);
    //printstr(str5); 
    printf("%s", str5); // print string using printf
    puts(str5); // print string using puts

    return 0; 
}