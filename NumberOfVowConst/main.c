#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;
    int noOfVowels=0;
    int noOfConst=0;
    printf("Enter a String : ");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        noOfVowels++;
       }
       else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
        noOfConst++;
       }
    }
    printf("Number of Vowels in %s is : %d ",str,noOfVowels);
     printf("\nNumber of Consonants in %s is : %d\n",str,noOfConst);
    return 0;
}
