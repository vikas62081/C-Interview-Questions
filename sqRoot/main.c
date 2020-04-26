#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i;
    int halfOfNumber;
    printf("Enter a number to find sq root : ");
    scanf("%d",&number);
    halfOfNumber=number/2;
    for(i=1;i<=halfOfNumber;i++){
        if(i*i==number){
            printf("Square root of %d is : %d ",number,i);
            break;
        }
    }
    if(i>halfOfNumber){
        printf("%d is not Perfect Square ",number);
    }
    return 0;
}
