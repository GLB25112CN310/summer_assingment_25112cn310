#include<stdio.h>
int main(){
    char i,j;
    for(i = 1;i<=5;i++){
        for(j=0;j<i;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
}