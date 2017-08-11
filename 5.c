#include<stdio.h>
int getnumber()
int main()
{

    int input  = 0;
    
    input = get thenumber();
    
 
    while (!((input <= 9) && (input >= 1))) {
        printf("[ERROR] The number you entered is out of range");
    
        input = get the number();
    }
    printf("
    The number you entered is %d", input);
    return 0;
}      
int get the number() {    
    int number;
    scanf("%d", &number);
    return (number);
}
