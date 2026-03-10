//Write a modular C program to read n float values from the user, store them in an array and find the maximum value and its index. (array, passing arrays to functions, for loop, if statement)
#include <stdio.h>

void readArray(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
}

void findMax(float arr[], int n, float *max, int *index) {
    *max = arr[0];
    *index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
            *index = i;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float arr[n];
    readArray(arr, n);
    float max;
    int index;
    findMax(arr, n, &max, &index);
    printf("Maximum value: %.2f\n", max);
    printf("Index of maximum value: %d\n", index);
    return 0;
}