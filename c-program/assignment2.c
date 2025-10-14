#include <stdio.h>

int main() {
    int n, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("The factorial of %d is %d\n", n, product);
    return 0;
}
