#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n<0)
        printf("Number is negative");
    else
        printf("Number is positive");
    return 1;
}