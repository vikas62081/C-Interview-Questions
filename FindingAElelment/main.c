#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int numbers[100];
    int key;
    int isFound=0;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("Enter a number to search : ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(numbers[i]==key){
            isFound=1;
            break;
        }
    }
    if(isFound==0){
        printf("Key %d is not found ",key);
    }else
    {
        printf("Key %d is found ",key);
    }
    return 0;
}
