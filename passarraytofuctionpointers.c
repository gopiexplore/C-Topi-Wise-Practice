//Write a program to pass an array to a function using pointers.
#include <stdio.h>
void printArray(int *arr,int size);
void main(){
    
    int a[5]={1,2,3,4,5};
    printArray(a,5);
}
void printArray(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",*(arr+i));
    }
}
