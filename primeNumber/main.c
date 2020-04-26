#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int isDivisible=0;
    int i;
    int count=0;
    int j;
    printf("Enter a number  : ");
    scanf("%d",&number);
    printf("Prime Numbers are :\n");
    for(j=2;j<=number;j++){
            isDivisible=0;
        for(i=2;i<=j/2;i++){
        if(j%i==0){
            isDivisible=1;
            break;
        }
    }
    if(isDivisible==0){
        count++;
    printf("%d ",j);
    }
    }
  printf("\nTotal prime number from 1 to %d is %d",number,count);
    return 0;
}
