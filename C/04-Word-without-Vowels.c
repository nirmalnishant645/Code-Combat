#include <stdio.h>
int main(){
    char s[100];
    int i=0;
    scanf("%s",s); //Taking Input String
    while(s[i]!='\0'){
        if(s[i] != 'a' && s[i] != 'A' && s[i] != 'e' && s[i] != 'E' && s[i] != 'i' && s[i] != 'I' && s[i] != 'o' && s[i] != 'O' && s[i] != 'u' && s[i] != 'U') //Checking for vowels
            printf("%c",s[i]); //Displaying output
        i++;
    }
    return 0;
}
