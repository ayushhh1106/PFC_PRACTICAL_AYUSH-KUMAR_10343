#include <stdio.h>
// Ayush kumar 10343
int main() {
    int n, i;
    int arr[100];
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even elements: %d", sum);

    return 0;
}   



// output 
// Enter number of elements: 6
// Enter array elements:
// 3 10 5 8 7 12
//  Sum of even elements: 30