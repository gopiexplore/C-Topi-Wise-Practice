//Write a program to access array elements using pointers.
#include <stdio.h>
void main(){
    int a[5]={1,1,2,3,5};
    int i;
    for(i=0;i<5;i++){
        printf("%d ",*(a+i));
    }
}

