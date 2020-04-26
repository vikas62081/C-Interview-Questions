#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int temp;
    int remainder;
    int reverseNumber=0;
    printf("Enter a number to check palindrome : ");
    scanf("%d",&number);
    temp=number;
    while(temp!=0){
        remainder=temp%10;
        reverseNumber=reverseNumber*10+remainder;
        temp=temp/10;
    }
   if(number==reverseNumber){
    printf("%d is palindrome number ",number);
   }else{
        printf("%d is not palindrome number ",number);
   }
    return 0;
}
