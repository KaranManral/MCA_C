#include <stdio.h>
#include <conio.h>

int fact(int x){
    int f=1,i=1;
    while(i<=x){
        f*=i;
        i++;
    }
    return f;
}

int main(){
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    int factorial = fact(n);
    printf("The Factorial of %d is %d",n,factorial);
    
    return 1;
}