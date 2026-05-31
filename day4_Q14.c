#include<stdio.h>
int main(){
    int i,n,a=0,b=1,next;
    printf("enter the number of terms : ");
    scanf("%d",&n);
    printf("fibonacci series :");
    if(n==0){
        printf("0");
    }
    else if(n==1){
        printf("1");
    }
    else{
        for(i=1;i<=n;i++){
            printf("%d \t",b);
            next = a+b;
            a=b;
            b= next;
        }
    }
}