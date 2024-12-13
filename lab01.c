#include<stdio.h>

int main (void)
{
    int x;
    printf("Enter a year:");
    scanf("%d", &x);
    if (x%4==0)
    {
        printf("Yes,It is leap year");
    }
    else
    {
        printf("No, It is not leap year");
    }
return 0;
}


