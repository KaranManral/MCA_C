#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main(){
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);

    (n%2==0)?printf("The number is even"):printf("The number is odd");
    
    return 1;
}