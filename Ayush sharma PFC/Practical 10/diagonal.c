#include <stdio.h>
// Ayush kumar 10343
int main() {
    int a[10][10], r, c, i, j, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++) {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
 
// output 
// Enter number of rows and columns: 3 3
// Enter elements:
// 1 2 3
// 4 5 6
// 7 8 9
// Sum of row 1 = 6
// Sum of row 2 = 15
// Sum of row 3 = 24