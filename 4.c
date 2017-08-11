
#include <stdio.h>
void main()
{
   char string1[10], string2[10], j, i;
   printf("\nEnter first string: ");
   scanf("%s",string1);
   printf("\nEnter second string: ");
   scanf("%s",str2)
   for(j=0; string1[j]!='\0'; ++j)
   for(i=0; string2[i]!='\0'; ++i, ++j)
   {
      string1[j]=string2[i];
   }
   string1[j]='\0';
   printf("\nOutput: %s",string1);
   
 
}
