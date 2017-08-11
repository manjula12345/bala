#include <stdio.h>

void main() 
{
   int array[5] = {1, 2, 3, 4, 5, };
   int sum, loop;
   float average;

   sum = avrage = 0;
   
   for(loop = 0; loop < 5; loop++)
   {
      sum = sum + array[loop];
   }
   
   avrage = (float)sum / loop;
   
   printf("Average of array values is %.2f", average);   
   
   
}
