#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum = 0;
    while (1)
    {
        printf("Enter Number to add\n");
        scanf("%d", &n);
        sum += n;
        printf("Want to enter more number to add? (y or n)\n");
        char ch;
        scanf("%s", &ch);
        if (!(ch == 'y' || ch == 'Y'))
            break;
    }
    printf("Sum is: %d\n", sum);
    return 1;
}