#include <stdio.h>

int main() {
    int n, temp, d, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        d = n % 10;
        sum += d * d * d;
        n /= 10;
    }

    if (sum == temp)
        printf("%d is an Armstrong Number", n);
    else
        printf("%d is not an Armstrong Number", n);

    return 0;
}