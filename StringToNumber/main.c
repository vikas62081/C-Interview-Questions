#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,sum=0;
    printf("Enter a String : ");
    gets(str);
    //using funcction
    int val=atoi(str);
    //printf("%d",val+1);
    //without using function
    for(i=0;i<strlen(str);i++){
            sum=(sum*10)+(str[i]-48);
    }
    printf("%d",sum+1);
    return 0;
}
