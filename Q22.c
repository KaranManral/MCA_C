#include <stdio.h>
#include <conio.h>

int linSearch(int a[],int n,int s){
    if(n<0)
        return -1;
    else{
        if(a[n]==s)
            return n;
        linSearch(a,n-1,s);   
    }
}

int main(){
    printf("Enter size of array\n");
    int n,s;
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements of array\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to search\n");
    scanf("%d", &s);
    int p = linSearch(a,n-1,s);
    if(p==-1)
        printf("Element not found\n");
    else
        printf("Element found at %d index.\n",p);
    return 1;
}