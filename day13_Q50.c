#include<stdio.h>
int main(){
    int i, n, a[100],sum = 0;
    printf("enter the number of terms :");
    scanf("%d",&n);
    printf("enter %d elements \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum +=a[i];
    }
    float avg = (float)sum / n;
    printf("sum = %d",sum);
    printf("avg = %f",avg);
    return 0;
}