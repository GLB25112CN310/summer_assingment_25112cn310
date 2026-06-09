#include<stdio.h>
int main(){
    int i, n, a[100],even = 0,odd = 0;
    printf("enter the number of terms :");
    scanf("%d",&n);
    printf("enter %d elements \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        if(a[i]%2 ==0){
            even++;
        }
        else{
            odd ++;
        }
    }
    printf("even elemants %d",even);
    printf("odd elements %d",odd);
    return 0;
}    