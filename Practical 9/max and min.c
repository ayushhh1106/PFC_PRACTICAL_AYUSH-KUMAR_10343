#include <stdio.h>
// Ayush kumar 10343
int main() {
    int n, i;
    int arr[100];
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d", min);

    return 0;
}

// output
// Enter number of elements: 6
// Enter array elements:
// 12 45 7 89 23 4
//  Maximum element: 89
// Minimum element: 4