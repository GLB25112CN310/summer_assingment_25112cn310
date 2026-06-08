#include<stdio.h>
int pal(int n){
    int d,rev = 0,temp = n;
    while(temp != 0){
        d = temp % 10;
        rev = rev * 10 + d;
        temp /= 10;
    }
    return (n == rev);
}

int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(pal(n)){
        printf("%d is a palindrome number",n);
    }
    else{
        printf("%d is not a palindrome number",n);
    }
    return 0;
}