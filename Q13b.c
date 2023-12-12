#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int getDifference(int n){
    int sumEven=0,sumOdd=0,ctr=1;
    while(n>0){
        if(ctr%2==0)
            sumEven+=n%10;
        else
            sumOdd+=n%10;
        ctr++;
        n/=10;
    }
    return abs(sumEven-sumOdd);
}

int main(){
    printf("Enter a number\n");
    int n,diff;
    scanf("%d",&n);
    diff=getDifference(n);
    printf("The Difference of sum of even and odd digits of %d is %d",n,diff);
    return 1;
}