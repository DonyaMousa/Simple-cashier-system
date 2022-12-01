#include <stdio.h>
int main (void){
int sum = 0,x;
    do {
        sum += x;
        printf("Enter item price: ");
        scanf("%d", &x);

    } while (x!=0);
    printf("Total = %d\n", sum);
}