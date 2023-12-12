#include <stdio.h>
#include <conio.h>

int getSumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    printf("Enter a number\n");
    int n,sum;
    scanf("%d",&n);
    sum=getSumOfDigits(n);
    printf("The sum of digits of %d is %d",n,sum);
    return 1;
}