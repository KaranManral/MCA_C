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
    if(rev==n)
        printf("The number is palindrome");
    else
        printf("The number is not palindrome");
    return 1;
}