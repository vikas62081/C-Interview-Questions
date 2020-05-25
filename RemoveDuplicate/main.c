#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int numbers[100];
    int i,j,k;
    printf("\nEnter Size of Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("\nBefore Removing Duplicate Element : ");
    for(i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(numbers[i]==numbers[j]){
                for(k=j;k<n;k++){
                    numbers[k]=numbers[k+1];
                }
                n--;
            }
        }
    }
    printf("\n\nAfter Removing Duplicate Element : ");
    for(i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }
    return 0;
}
