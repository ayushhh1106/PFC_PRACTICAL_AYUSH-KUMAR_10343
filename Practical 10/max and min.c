#include <stdio.h>
//  Ayush kumar 10343
int main() {
    int a[10][10], r, c, i, j;
    int max, min;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
 
// output 
// Enter number of rows and columns: 2 3
// Enter elements:
// 5 8 2
// 9 1 6
// Maximum element = 9
// Minimum element = 1