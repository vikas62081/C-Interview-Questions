#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int remainder;
    int reverseNumber=0;
    printf("Enter a  number to Reverse : ");
    scanf("%d",&number);
    while(number!=0){
        remainder=number%10;
        reverseNumber=(reverseNumber*10)+remainder;
        number=number/10;
    }
    printf("Reverse number is : %d",reverseNumber);
    return 0;
}
