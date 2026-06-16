#include <stdio.h>
int main() {
    int a[10][10],m,n,i,j,sum;
    printf("enter the size of matrix :\n ");
    scanf("%d %d", &m, &n);
    printf("Enter elements in matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (j = 0; j < n; j++) {
        sum = 0;
        for (i = 0; i < m; i++) {
            sum += a[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
    return 0;
}