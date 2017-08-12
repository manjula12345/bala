#include<stdio.h>
#include<conio.h>
int main()
{
 int j,x[10],y[10],z[10];
 clrscr();
 printf("\nReading the 1st array\n");
 for (j=0;j<10;j++)
   {
   printf("Enter the  value");
   scanf("%d",&x[j]);
   }
 printf("\nReading the 2nd array\n");
 for (j=0;j<10;j++)
   {
   printf("Enter the  value");
   scanf("%d",&y[j]);
   }
   printf("\nThe output of addition of 2 array is\n");
   for(j=0;j<10;j++)
     {
     z[j]=x[j]+y[j];
     printf("\nthe sum of %d & %d is %d",x[j],y[j],z[j]);
     }
     getch();
}
