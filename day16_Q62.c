#include <stdio.h>
int main() {
    int n,i,j, a[100],count,maxCount = 0,element;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            element = a[i];
        }
    }
    printf("Element with maximum frequency: %d\n", element);
    printf("Frequency: %d", maxCount);
    return 0;
}