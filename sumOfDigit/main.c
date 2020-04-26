#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int reminder;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&number);
    while(number!=0){
        reminder=number%10;
        sum=sum+reminder;
        number=number/10;
    }
    printf("Sum of digit is %d",sum);
    return 0;
}
