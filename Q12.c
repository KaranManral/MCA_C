#include <stdio.h>
#include <math.h>

int findArmstrong(int x){
    double arm=0;
    int len=0,temp=x;
    while(temp>0)
    {
        len++;
        temp/=10;
    }
    
    while(x>0){
        arm+=pow(x%10,len);
        x/=10;
    }
    return arm;
}

int main(){
    int n,arm;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(findArmstrong(n)==n)
        printf("The number is Armstrong");
    else
        printf("The number is not Armstrong");
    return 1;
}