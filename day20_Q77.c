#include<stdio.h>
int main(){
    int p,q,m,n,i,j,k;
    printf("enter the size of first matrix :\n");
    scanf("%d %d",&m,&n);
    printf("enter the size of second matrix :\n");
    scanf("%d %d",&p,&q);
    int a[m][n],b[p][q];
    printf("enter elements in first matrix :\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements in second matrix :\n");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[m][q];

    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            c[i][j] = 0;
            for(k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
          }  
        }
    }
    
    printf("multiplication matrix is : \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }    
    return 0;
}

