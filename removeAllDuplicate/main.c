#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,j,k;
    printf("Enter a String : ");
    gets(str);
    for(i=0;i<strlen(str);i++){
        for(j=i+1;j<strlen(str);){
            if(str[i]==str[j]){
                for(k=j;k<strlen(str);k++){
                    str[k]=str[k+1];
                }
            }
            else{
                j++;
            }
        }
    }
    printf("New String without duplicate char is : %s",str);
    return 0;
}
