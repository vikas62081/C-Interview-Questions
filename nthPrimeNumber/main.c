#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,n=10000,flag=0,j;
    int target=25;
    int count=0;
    while(i<=n){
            flag=0;
            for(j=2;j<=i-1;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                count++;
               // printf("%d ",i);//print all n prime number
            }
            if(count==target){
                    printf("%d th prime number is : %d",target,i);//print nth prime number
                break;
            }
        i++;
    }
    //printf("Total prime numbers are : %d",count);// print count of prime number between 1 to N
    return 0;
}
