#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;//number to find factorial
    int i;//for loop
    int factorial=1;
    printf("Enter a number to find factorial : ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    printf("Factorial of %d is %d",number,factorial);
    return 0;
}
