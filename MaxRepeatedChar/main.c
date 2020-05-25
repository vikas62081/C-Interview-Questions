#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,j;
    char maxRepeatedChar;
    int count=0;
    int maxCount=0;
    printf("Enter a String : ");
    gets(str);
    for(i=0;i<strlen(str);i++){
            count=0;
        for(j=0;j<strlen(str);j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(maxCount<count){
            maxCount=count;
            maxRepeatedChar=str[i];
        }
    }
    printf("The char %c has been repeated maximum of %d times",maxRepeatedChar,maxCount);
    return 0;
}
