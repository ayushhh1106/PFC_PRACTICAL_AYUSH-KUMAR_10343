#include <stdio.h>
// Ayush kumar 10343
int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// output
// Enter number of elements: 5
// Enter array elements: 10 20 30 40 50
// reverswd arry: 50 40 30 20 10