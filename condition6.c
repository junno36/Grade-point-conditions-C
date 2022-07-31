#include<stdio.h>
int main()
{
    int result;
    printf("Enter your result:");
    scanf("%d",&result);
    if (result>=0 && result<=39)
    {
        printf("You are fail");
    }
    else if (result>=40 && result<=44)
    {
        printf("You got D");
    }
    else if (result>=45 && result<49)
    {
        printf("You got C");
    }
    else if (result>=50 && result<=54)
    {
        printf("You got C+");
    }
    else if (result>=55 && result<59)
    {
        printf("You got B-");
    }
    else if (result>=60 && result<=64)
    {
        printf("You got B");
    }
    else if (result>=65 && result<69)
    {
        printf("You got B+");
    }
    else if (result>=70 && result<=74)
    {
        printf("You got A-");
    }
    else if (result>=75 && result<79)
    {
        printf("You got A");
    }
    else if (result>=80 && result<=100)
    {
        printf("You got A+");
    }
    else
    {
        printf("Your entered result is invalid.");
    }
    return 0;
}
