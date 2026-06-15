#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("enter the size of arrays :\n");
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n];
    printf("enter elements in first array :\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements in second array :\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[m][n];

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("sum of two matrix is : \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }    
    return 0;
}