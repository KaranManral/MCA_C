#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Enter a Letter\n");
    char s;
    scanf("%c",&s);
    if(s>=65&&s<=90)
        s=s-65+97;
    else if(s>=97&&s<=122)
        s=s-97+65;
    else{
        printf("Invalid Character, Enter a Letter");
        exit(100);
    }
    
    printf("The letter after case change is %c",s);
    
    return 1;
}