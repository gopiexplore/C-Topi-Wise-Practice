
//Write a program to find the largest element in each row of a matrix.
#include <stdio.h>
void main(){
    int a[3][3]={{1,2,3},{33,2,343},{0,232,3}};
    int i,j,max;
    for(i=0;i<3;i++){
        max=a[0][0];
        for(j=0;j<3;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        
        }
        printf("%d is the max in this row \n",max);
    }
}

