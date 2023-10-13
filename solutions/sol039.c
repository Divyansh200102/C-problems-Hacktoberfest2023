#include <stdio.h>

int main() {
    int n = 7; // Number of terms to sum
    double sum = 0.0;
    double factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i; // Calculate factorial
        sum += (i / factorial); // Add the current term to the sum
    }

    printf("The sum of the first seven terms of the series is: %.4lf\n", sum);

    return 0;
}
