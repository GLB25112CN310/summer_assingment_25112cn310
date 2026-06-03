#include<stdio.h>
int rev(int n);
int  reverse = 0;

int rev(int n){
    
    if(n ==0){
        
        return reverse;
    }   
    reverse = reverse * 10 +  n%10; 
    return rev(n/10);  
    
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("%d",rev(n));

}