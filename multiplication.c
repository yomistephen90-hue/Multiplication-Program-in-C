#include <stdio.h>

// multiplication table
int main(){
    int a, b, product;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
//declaration of what number to input
    product = a * b;

    printf("the product is: %d\n", product);

    return 0;

}