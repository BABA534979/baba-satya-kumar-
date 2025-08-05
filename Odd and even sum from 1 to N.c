#include <stdio.h>

int main() {
    int i, n;
    int sumEven = 0, sumOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sumEven += i;
        else
            sumOdd += i;
    }

    printf("Sum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers = %d\n", sumOdd);

    return 0;
}
