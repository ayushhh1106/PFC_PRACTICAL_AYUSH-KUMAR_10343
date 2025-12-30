#include <stdio.h>
//  Ayush kumar 10343
int main() {
    int a[10][10], n, i, j, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
 
// output 
// Enter size of square matrix: 3
// Enter elements:
// 1 2 3
// 4 5 6
// 7 8 9
// Sum of diagonal elements = 15