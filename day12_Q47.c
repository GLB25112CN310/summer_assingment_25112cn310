#include<stdio.h>
int fab(int n){
    int a = 0, b = 1, c;
    printf("fibonacci series :");
    for(int i = 1; i<=n; i++)
    {
        printf("%d",b);
        c = a + b;
        a = b;
        b = c;
    }
}
int main(){
    int n;
    printf("enter the number of terms :");
    scanf("%d",&n);
    
    fab(n);
    return 0;
}