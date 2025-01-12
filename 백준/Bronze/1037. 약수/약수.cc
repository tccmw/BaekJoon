#include <stdio.h>

int main() {
    int numDivisors;
    scanf("%d", &numDivisors);

    int divisors[numDivisors];
    for (int i = 0; i < numDivisors; i++) {
        scanf("%d", &divisors[i]);
    }

    int min = divisors[0], max = divisors[0];
    for (int i = 1; i < numDivisors; i++) {
        if (divisors[i] < min) min = divisors[i];
        if (divisors[i] > max) max = divisors[i];
    }

    printf("%d\n", min * max);
    return 0;
}
