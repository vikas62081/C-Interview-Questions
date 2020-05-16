#include <stdio.h>
#include <stdlib.h>

int findMin(int num[],int n){
int min=num[0];
int i;
for(i=0;i<n;i++){
    if(min>num[i]){
        min=num[i];
    }
}
return min;
}

int findMax(int num[],int n){
int max=num[0];
int i;
for(i=0;i<n;i++){
    if(max<num[i]){
        max=num[i];
    }
}
return max;
}
int main()
{
    int n;
    int numbers[100];
    int i;
    printf("How many numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("Enter %d number : ",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("Minimum number is : %d\n",findMin(numbers,n));
     printf("Maximum number is : %d",findMax(numbers,n));
    return 0;
}
