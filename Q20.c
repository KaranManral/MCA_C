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
    printf("Enter value of N\n");
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(isPrime(i)==1)
            printf("%d,",i);
    }
    return 1;
}