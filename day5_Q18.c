#include<stdio.h>
int main(){
    int n, fact, i, temp, rem, sum = 0;
    printf("enter the number :");
    scanf("%d",&n);
    temp = n;
    while(temp > 0){
        rem = temp%10;
        fact = 1;
    
        for(i=1;i<=rem;i++)
            fact = fact*i;
           
        sum= sum+fact;
        temp/=10;
        
    }    
    if(sum == n){
        printf("%d is a strong number",n);
    }
    else{
        printf("%d is not a strong number ",n);
    }
}
