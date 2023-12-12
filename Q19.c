#include <stdio.h>
#include <conio.h>

void generateBin(int n){
    if(n<=1)
        printf("%d",n);
    else{
        generateBin(n/2);
        printf("%d",(n%2));
    }
}

int main(){
    printf("Enter number in Decimal\n");
    int n;
    scanf("%d",&n);
    generateBin(n);
    return 1;
}