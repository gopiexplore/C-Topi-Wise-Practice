/*Multi-dimensional Arrays:

Write a program to add two matrices.
*/

#include <stdio.h>
void main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    int c[3][3];
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

