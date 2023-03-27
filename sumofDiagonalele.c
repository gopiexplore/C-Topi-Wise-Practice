//Write a program to find the sum of the diagonal elements of a matrix.
#include <stdio.h>
void main(){
    int a[3][3]={{3,2,3},{2,3,2},{3,3,3}};
    int i,j,sum;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d ",sum);
}

