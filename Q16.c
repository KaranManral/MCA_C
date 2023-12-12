#include <stdio.h>

int main(){
    printf("Enter a Character\n");
    char s;
    scanf("%c",&s);

    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
        printf("Character is a Vowel");
    else
        printf("Character is not a Vowel");
    
    return 1;
}