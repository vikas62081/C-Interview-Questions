#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,j;
    int count=0;
    char firstNonRepeatedChar;
    int found=0;
    printf("Enter a String : ");
    gets(str);
    for(i=0;i<strlen(str);i++){
            count=0;
        for(j=0;j<strlen(str);j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==1){
            firstNonRepeatedChar=str[i];
            found=1;
            break;
        }
    }
    if(found==0){
        printf("All char are repeating in String : %s",str);
    }else{
        printf("First Non Repeated char in %s Is : %c",str,firstNonRepeatedChar);
    }

    return 0;
}
