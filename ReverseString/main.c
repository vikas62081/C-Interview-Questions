#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char newStr[100];
    int length=0;
    int end;
    int i;
    printf("Enter a String : ");
    gets(str);
    //find length of String
    while(str[length]!='\0'){
       length++;
    }
    end=length-1;
for(i=0;i<length;i++){
    newStr[i]=str[end];
    end--;
}
newStr[i]='\0';
    printf("Reverse String is : %s",newStr);
    return 0;
}
