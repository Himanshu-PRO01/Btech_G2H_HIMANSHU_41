#include<stdio.h>
int main()
{
    float C,F;
    printf("enter the temp in celsius:");
    scanf("%f",&C);
    F=32+9*C/5;
    printf("The converted temp in F is :%f",F);
    return 0;

}