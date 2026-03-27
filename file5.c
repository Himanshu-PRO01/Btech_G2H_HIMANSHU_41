#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter any 2 number:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swapped of variable are a:%d and b:%d",a,b);
    return 0;


}