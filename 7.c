#include <stdio.h>
void main()
{
    int number, j = 1;
    printf("
    Enter any Number:");
    scanf("%d", &number);
    printf("Multiplication table of %d: ", number);
    
    while (j <= 10)
    {
        printf("
        %d x %d = %d", number, j, number * j);
        j++;
    }
   
}
