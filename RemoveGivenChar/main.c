#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char removeChar;
    int i,j;
    printf("Enter a String : ");
    gets(str);
    printf("Enter a char to be Remove : ");
    removeChar=getchar();
    for(i=0;i<strlen(str);i++){
        if(str[i]==removeChar){
            for(j=i;j<strlen(str);j++){
                str[j]=str[j+1];
            }
        }
    }
printf("Your new String is : %s",str);
    return 0;
}
