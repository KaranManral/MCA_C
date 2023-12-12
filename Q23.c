#include <stdio.h>
#include <conio.h>
#include <string.h>

void bSort(char *a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(&a[j+1],&a[j])<0)
			{
				char *temp = a[j];
				a[j]=a[j+1];
				a[j+1]= temp;
			}
		}
	}
}

int main(){
	printf("Enter size of array\n");
	int n;
	scanf("%d",&n);
	char *a[n];
	printf("Enter %d names in array\n",n);
	for(int i=0;i<n;i++)
		scanf("%s",&a[i]);
	printf("Array: ");
	for(int i=0;i<n;i++)
		printf("%s,",&a[i]);
	bSort(a,n);
	printf("\nSorted Array: ");
	for(int i=0;i<n;i++)
		printf("%s,",&a[i]);
	return 1;
}
