#include <stdio.h>

int main() {
    // Ayush Kumar_10343
    // Diamond Pattern Program in C

    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\nPattern printed successfully!\n");

    return 0;
}
