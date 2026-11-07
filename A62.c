
#include <stdio.h>

void partA() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Simple Order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReverse Order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void partB() {
    int arr[10];

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input! Please enter integers only.\n");
            return;
        }
    }

    printf("Entered 10 Elements: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    printf("--- Part A ---\n");
    partA();

    printf("--- Part B ---\n");
    partB();

    return 0;
}

