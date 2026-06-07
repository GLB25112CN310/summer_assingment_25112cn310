#include<stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a,b;
    printf("enter the numbers : \n");
    scanf("%d %d",&a,&b);
    
    printf("maximum is %d",max(a,b));
}