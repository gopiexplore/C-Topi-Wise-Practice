

//Write a program to multiply two matrices
#include <stdio.h>
void main(){
    int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int b[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int c[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int i,j,k,l,m;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                c[i][j]=c[i][j]+a[j][k]*b[k][j];
            }
        }
    }
    for(l=0;l<3;l++){
        for(m=0;m<3;m++){
            printf("%d ",c[l][m]);
        }
        printf("\n");
    }
}
