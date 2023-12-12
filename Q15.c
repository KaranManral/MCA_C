#include <stdio.h>
#include <conio.h>

int isPrime(int x){
    if(x==1||x==0)
        return 0;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    if(isPrime(n)==1)
        printf("The number is prime");
    else
        printf("The number is not prime");
    return 1;
}