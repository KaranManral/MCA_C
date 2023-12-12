#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Enter value of N\n");
    int n,sum=0;
    scanf("%d", &n);
    sum=n*(n+1)/2;
    printf("Sum %d natural numbers is %d",n,sum);
    return 1;
}