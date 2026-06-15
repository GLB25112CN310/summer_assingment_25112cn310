#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("enter the size of arrays :\n");
    scanf("%d %d",&m,&n);
    int a[m][n],b[n][m];
    printf("enter elements in array :\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            b[j][i] = a[i][j];
        }
    }
    printf("transpose of array is :\n");
    for(j = 0; j < n; j++){
        for(i = 0; i < m; i++){
            printf("%d",b[j][i]);
        }
        printf("\n");
    }
}