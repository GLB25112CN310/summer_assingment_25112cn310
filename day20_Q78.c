#include<stdio.h>
int main(){
    int m,i,j,temp;
    printf("enter the size of square matrix :\n");
    scanf("%d",&m);
    int a[m][m];

    printf("enter elements in square matrix :\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    temp = a[i][j];
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            a[j][i] = a[i][j];
        }
    }
    
    if(a[j][i] == temp){
        printf("symmetric matrix");
    }
    else{
        printf(" not a symmetric matrix");
    }
    return 0;
}