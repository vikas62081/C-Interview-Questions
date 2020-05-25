#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char replace;
    char replaceBy;
    int i;
    printf("Enter a String : ");
    scanf("%s",str);
    printf("Enter a char to be Replaced :  ");
    scanf("%d");
    replace=getchar();
    printf("Enter a char who is going to replace %c : ",replace);
    scanf("%d");
    replaceBy=getchar();

    for(i=0;i<strlen(str);i++){
        if(str[i]==replace){
            str[i]=replaceBy;
        }
    }

    printf("\nYour New String is : %s\n",str);
    return 0;
}
