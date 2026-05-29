#include<stdio.h>
int main(){
    int n,i,d,rev=0, temp;
    printf("enter the number :");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        d=n%10;
        rev = rev*10+d;
        n=n/10;
        
    }  
    if(temp ==rev){    
        printf("number is palindrome");  
    }
    else{
        printf("not palindrome");
    }
}
