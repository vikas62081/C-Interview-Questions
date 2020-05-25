#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,j;
    int count=0;
    printf("Enter a string : ");
    gets(str);
    printf("\nRepeated char are : ");
    for(i=0;i<strlen(str);i++){
            count=0;
        for(j=i+1;j<strlen(str);j++){
            if(str[i]==str[j]){
                count++;
                str[j]='$';
            }
        }
        if(count>0&&str[i]!='$'){
            printf("\n%c - %d times",str[i],count+1);
        }
    }
    return 0;
}
