#include<stdio.h>
int main(){
    int a,b ,GCD;
    printf("enter the numbers :\n");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a && i<=b;++i){
        if(a%i==0 && b%i==0){
            GCD = i;
        }
    }
    printf("GCDof %d and %d is %d",a,b,GCD);
}