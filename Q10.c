#include <stdio.h>
#include <conio.h>

int reverse(int x){
    int rev=0;
    while (x>0)
    {
        rev=rev*10+(x%10);
        x/=10;
    }
    return rev;
}

int main(){
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    int rev = reverse(n);
    printf("The reverse of %d is %d",n,rev);
    return 1;
}