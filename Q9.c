#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool checkYear(int y) {
    
    if (y % 4 == 0) {
        
        if (y % 100 == 0) {
            return y % 400 == 0;
        }
        return true;
    }
    return false;
}

int main(){
    int n;
    printf("Enter the Year\n");
    scanf("%d",&n);
    if(checkYear(n))
        printf("It is a Leap Year");
    else
        printf("It is not a Leap Year");
    return 1;
}