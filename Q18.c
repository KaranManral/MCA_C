#include <stdio.h>
#include <conio.h>

void generateFib(int a,int b,int n){
    if(n==0)
        printf("");
    else if(n==1)
        printf("%d",a);
    else{
        printf("%d,",a);
        generateFib(b,a+b,n-1);
    }
}

int main(){
    printf("Enter Length of Fibonacci Series\n");
    int n;
    scanf("%d",&n);
    generateFib(0,1,n);
    return 1;
}   