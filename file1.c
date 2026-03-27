#include<stdio.h>
int main()
{ int phy,chem,maths,eng,CS,sum,percentage;
printf("EWnter the all 5 subjects");
scanf("%d%d%d%d%d",&phy&chem&maths&eng&CS);
sum=phy+chem+maths+eng+CS;
percentage=sum/5;
printf("The sum and percentage of the makrs are %dand %d",sum,percentage);
return 0;
 }