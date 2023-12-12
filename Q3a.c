#include <stdio.h>
#include <conio.h>

int main(){
    int a,b,temp;
    printf("Enter Number 1\n");
    scanf("%d",&a);
    printf("Enter Number 2\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping Number 1 is: %d\n",a);
    printf("After Swapping Number 2 is: %d\n",b);
    return 1;
}