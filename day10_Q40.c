#include<stdio.h>
int main(){
    int n,space;
    printf("enter the number :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(space = 1;space<=n-i;space++){
            printf(" ");
        }
    
        for(int j=0;j<i;j++){
            printf("%c",'A'+j);
        }
        for(int j=i-2;j>=0;j--){
            printf("%c",'A'+j);
        }

    
        printf("\n");
    }    
}