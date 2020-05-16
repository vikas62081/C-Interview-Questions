#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int numbers[50];
    int i;
    int sum=0;
    int total;
    printf("How many number :  ");
    scanf("%d",&n);
    printf("Enter all numbers one by one : \n");
    for(i=0;i<n;i++){
        scanf("%d",&numbers[i]);
        sum=sum+numbers[i];
    }
    n++;
    total=(n*(n+1))/2;
    printf("Your missing Number is %d",total-sum);
    return 0;
}
