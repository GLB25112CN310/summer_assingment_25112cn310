#include<stdio.h>
int main(){
    int i,a[100],n;
    printf("enter the number of terms :");
    scanf("%d",&n);
    printf("enter %d elements : \n",n);
    for(i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array elements are \n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;

}