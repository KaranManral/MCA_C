#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    printf("Enter Number 1\n");
    scanf("%d",&a);
    printf("Enter Number 2\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping Number 1 is: %d\n",a);
    printf("After Swapping Number 2 is: %d\n",b);
    return 1;
}