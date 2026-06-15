#include<stdio.h>
int main(){
    int m,n,i,j,primary_sum = 0,secondary_sum = 0;
    printf("enter the size of arrays :\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("enter elements in array :\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        primary_sum += a[i][i];
        secondary_sum += a[i][n-i-1];
    }
    printf("primary sum = %d",primary_sum);
    printf("secondary_sum = %d",secondary_sum);
}