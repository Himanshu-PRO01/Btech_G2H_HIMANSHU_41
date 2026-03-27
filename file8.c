#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to be ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("The number is even");
    }
    else 
    {
        printf("The number entered is odd ");
    }
    return 0;

}