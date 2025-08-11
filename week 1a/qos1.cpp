#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (printf("Enter number of elements: "), fflush(stdout), scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid size\n");
        return 1;
    }

    long long sum = 0;
    int *arr = malloc(sizeof(int) * n);
    if (!arr) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i+1);
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            return 1;
        }
        sum += arr[i];
    }

    double average = (double)sum / n;
    printf("Average = %.2f\n", average);

    free(arr);
    return 0;
}
