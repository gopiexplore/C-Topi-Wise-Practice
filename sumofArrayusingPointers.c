//Write a program to find the sum of array elements using pointers.
#include <stdio.h>
void main(){
    int a[]={1,2,3,4,5};
    int i,sum=0;
    for(i=0;i<5;i++){
        sum+=*(a+i);
    }
    printf("The Sum of Array is %d ",sum);
}

