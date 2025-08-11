#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter number of integers: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid count.\n");
        return 1;
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        int val;
        printf("Enter integer %d: ", i + 1);
        if (scanf("%d", &val) != 1) {
            fprintf(stderr, "Invalid integer input.\n");
            return 1;
        }
        sum += val;
    }

    double average = (double)sum / n;
    printf("Sum = %lld\n", sum);
    printf("Average = %.6f\n", average);

    return 0;
}
