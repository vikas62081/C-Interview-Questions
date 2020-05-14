#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binary;
    int decimal=0;
    int rem=0;
    int base=1;

    printf("Enter a Binary Number : ");
    scanf("%d",&binary);
    while(binary>0){
        rem=binary%10;
        decimal=decimal+(rem*base);
        binary=binary/10;
        base=base*2;
    }
    printf("Decimal Number is : %d",decimal);
    return 0;
}
