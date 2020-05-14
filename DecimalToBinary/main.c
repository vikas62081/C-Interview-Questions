#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int rem[10];
    int i=0;
    printf("Enter a number to covert into Binary : ");
    scanf("%d",&number);
    while(number>0){
        rem[i]=number%2;
        number=number/2;
        i++;
    }
    printf("Binary is : ");
    for(i=i-1;i>=0;i--){
        printf("%d",rem[i]);
    }
    return 0;
}
