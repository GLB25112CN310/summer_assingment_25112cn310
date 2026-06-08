#include<stdio.h>
int armst(int n){
    int d,sum = 0;
    int temp = n;
    while(temp != 0){
        d=temp%10;
        sum +=d*d*d;
        temp/=10;
    }
    return (sum == n); 
}

int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(armst(n)){
        printf("%d is a amstrong number",n);
    }
    else{
        printf("%d is not a amstrong number",n);
    }
    return 0;
}