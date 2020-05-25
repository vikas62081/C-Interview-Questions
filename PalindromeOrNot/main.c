#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char revStr[100];
    printf("Enter a String : ");
    gets(str);
    strcpy(revStr,str);
    strrev(revStr);
    if(strcmp(revStr,str)==0){
        printf("Given String is palindrome ");
    }else{
          printf("Given String is Not palindrome ");
    }
    return 0;
}
