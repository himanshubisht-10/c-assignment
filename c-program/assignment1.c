#include <stdio.h>

int main() {
    int product = 1;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n); // Take input from the user

    for (int i = 1; i <= n; i++) {
        product = product * i; // Multiply i to product
    }

    printf("The factorial of %d is %d\n", n, product); // Print after loop

    return 0;
}
