#include <stdio.h>
#include <conio.h>

int main(){
    int n1,n2,n3,min,max,mid;
    printf("Enter the 3 Numbers\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    max = n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
    min = n1<n2?(n1<n3?n1:n3):(n2<n3?n2:n3);
    mid = (n1+n2+n3)-(min+max);

    printf("Minimum: %d\n",min);
    printf("Maximum: %d\n",max);
    printf("Numbers in Ascending Order: %d,%d,%d",min,mid,max);

    return 1;
}