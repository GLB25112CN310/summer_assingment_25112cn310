#include<stdio.h>
int main(){
    int n,i,d,pro=1;
    printf("enter the number :");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        pro = pro*d;
        n=n/10;
        
    }      
    printf("sum of the digits of the number :%d",pro);  
}