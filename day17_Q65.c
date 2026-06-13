#include<stdio.h>
int main(){
    int i,n1,n2,a1[100],a2[100],a3[100];
    printf("enter size of first array :");
    scanf("%d",&n1);
    printf("enter size of second array :");
    scanf("%d",&n2);
    printf("enter elements in first array :\n ");
    for(int i=0;i<n1;i++){
        scanf("%d",&a1[i]);
    }
    printf("enter elements in second array :\n ");
    for(int i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n1;i++){
        a3[i]=a1[i];
    }
    for(i=0;i<n2;i++){
        a3[n1+i]= a2[i];
    }
    printf("array a3[100] is :");
    for(i=0;i<n1+n2;i++){
        printf("%d",a3[i]);
    }
    return 0;
}