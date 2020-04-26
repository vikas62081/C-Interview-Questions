#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;//for terms
    int firstNumber=0;
    int secondNumber=1;
    int nextNumber;
    int i;
    printf("Enter the number of terms : ");
    scanf("%d",&number);
    printf("The fibonacci series is : ");
    for(i=1;i<=number;i++){
        printf("%d ",firstNumber);
        nextNumber=firstNumber+secondNumber;
        firstNumber=secondNumber;
        secondNumber=nextNumber;
    }
    return 0;
}
