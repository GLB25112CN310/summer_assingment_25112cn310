#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the no. of terms : \n");
    scanf("%d",&n);
    for(int i;i<=n;i++){
        sum = sum +i;
    }
    printf("sum of terms :%d",sum);
}