#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char firstRepeatedChar;
    int found=0;
    int i,j;
    printf("Enter a String : ");
    gets(str);
    for(i=0;i<strlen(str);i++){
        for(j=i+1;j<strlen(str);j++){
            if(str[i]==str[j]){
                firstRepeatedChar=str[i];
                found=1;
                break;
            }
        }
        if(found==1){
            break;
        }
    }
    if(found==1){
        printf("First Repeated char of %s is : %c",str,firstRepeatedChar);
    }else{
        printf("No repeated char has been found");
    }

    return 0;
}
