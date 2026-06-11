#include <stdio.h>

int main() {
    int n, i, a[100], j = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        if(a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }
    while(j < n) {
        a[j] = 0;
        j++;
    }
    printf("Array after moving zeroes to end: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}