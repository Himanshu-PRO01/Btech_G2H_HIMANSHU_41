#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year to be checkedd");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("entered year is leap year");
    }
    else 
    {
        printf("The entered number is not a leap year");
    }
return 0;
}
