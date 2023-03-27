




//Write a program to copy the elements of one array to another using pointers.
#include <stdio.h>
void main(){
    int arr[]={1,2,3,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int arrcopy[size];
    int i;
    for(i=0;i<size;i++){
        *(arrcopy+i)=*(arr+i);
    }
    for(i=0;i<size;i++){
        printf("%d ",*(arrcopy+i));
    }

