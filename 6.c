#include <stdio.h>
#define min 0
#define max 50
void main()
{
    int a;

    while (1) 
    {
        printf("Enter a number (%d-%d) :",min ,max);
        scanf("%d", &a);

        if (a >= MIN && a <= MAX)
        {
            printf("Good\n");
        } else {
            printf("Damn you!\n");
            break;
        }
    }

  }
