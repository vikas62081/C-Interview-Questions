#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber;
    int secondNumber;
    int max;
    int i;
    int product;
    printf("Enter first Number : ");
    scanf("%d",&firstNumber);
    printf("Enter second Number : ");
    scanf("%d",&secondNumber);
    max=firstNumber>secondNumber?firstNumber:secondNumber;
    product=firstNumber*secondNumber;
    for(i=max;i<=product;i++){
        if(i%firstNumber==0 && i%secondNumber==0){
            printf("Lcm of %d and %d is %d ",firstNumber,secondNumber,i);
            break;
        }
    }
    return 0;
}
