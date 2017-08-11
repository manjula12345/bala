#include<stdio.h>
void main()
{
    int x[40],j,a,large,small;
    printf("How many elements:");
    scanf("%d",&a);
    printf("Enter the Array:");
 
    for(j=0;j<n;++j)
        scanf("%d",&a[j]);
    
    large=small=x[0];
    for(j=1;j<x;++j)
    {
        if(x[j]>large)
            large=x[j];
        if(a[j]<small)
            small=x[j];
    }
    
    printf("The largest element is %d",large);
    printf("\nThe smallest element is %d",small);
 
  
}
