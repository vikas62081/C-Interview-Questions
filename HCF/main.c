#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber;
    int secondNumber;
    int min;
    printf("Enter first Number : ");
    scanf("%d",&firstNumber);
    printf("Enter second Number : ");
    scanf("%d",&secondNumber);
    min=firstNumber<secondNumber?firstNumber:secondNumber;
    while(min>=1){
            if(firstNumber%min==0&& secondNumber%min==0){
                printf("HCF of %d and %d is : %d ",firstNumber,secondNumber,min);
                break;
            }
       --min;
    }
    return 0;
}
