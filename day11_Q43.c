#include<stdio.h>
int prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    if(prime(n)){
        printf("prime number");
    }
    else{
        printf("not a prime number");
    }
    return 0;
}