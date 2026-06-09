#include<stdio.h>
int main(){
    int i, n, a[100],larg,small;
    printf("enter the number of terms :");
    scanf("%d",&n);
    printf("enter %d elements \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    larg = small = a[0];
    for(i=0;i<n;i++){
        if(larg <a[i]){
            larg = a[i];
        }
        if(small > a[i]){
            small = a[i];
        }
    }
    printf("largest is %d",larg);
    printf("smallest is %d",small);
    return 0;
}    