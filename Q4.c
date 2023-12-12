#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isEven(int x){
    if(x%2==0)
        return true;
    else return false;
}

int main(){
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    
    if(isEven(n))
        printf("The number is even");
    else
        printf("The number is odd");
    return 1;
}