#include<stdio.h>
int main()
{
    int phy,chem,maths,eng,CS,percentage;
    printf("Enter the marks of physics");
    scanf("%d",&phy);
    printf("Enter the marks of chem");
    scanf("%d",&chem);
    printf("Enter the marks of maths");
    scanf("%d",&maths);
    printf("Enter the marks of eng");
    scanf("%d",&eng);
    printf("Enter the marks of CS");
    scanf("%d",&CS);
    percentage=(phy+chem+maths+eng+CS)/5;
    if (percentage>90 && percentage<=100)
    {
        printf("Grade A" );
    }
    else if (percentage>80 && percentage <=90);
    {
         printf("Grade B" );
    }
   else if (percentage>60 && percentage<=80);
   {
     printf("Grade C" );
   }
   else{
     printf("Grade D" );
   }
   return 0;
       
}