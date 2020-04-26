#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int temp;
    int remainder;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&number);
    temp=number;
    while(temp!=0){
        remainder=temp%10;
        sum=sum+(remainder*remainder*remainder);
        temp=temp/10;
    }
    if(number==sum){
        printf("%d is Armstrong number",number);
    }else{
    printf("%d is not Armstrong number",number);
    }
    return 0;
}
