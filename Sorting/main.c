#include <stdio.h>
#include <stdlib.h>
void printArray(int numbers[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }
}
int main()
{
    int temp;
    int n;
    int i,j;
    int numbers[100];
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("Before Sorting : ");
    printArray(numbers,n);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(numbers[i]<numbers[j])
            {
                //swapping of numbers
                temp=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=temp;
            }
        }
    }
    printf("\nAfter  Sorting : ");
    printArray(numbers,n);
    return 0;
}
