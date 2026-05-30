#include<stdio.h>
int main(){
    int i,j,start,end,flag;
    printf("enter the numbers :\n");
    scanf("%d %d",&start,&end);
    for(i = start;i<=end;i++){
        if(i<2){
    
            continue;
        }
        flag = 1;
    
        for(j=2;j<=i/2;j++){
            if(i%j ==0){
                flag=0;
                break;
            }
        }
        if(flag ==1){
            printf("%d \t",i);
        }
    }    
}