//Write a program to copy the elements of one dynamically allocated array to another
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n,i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    int *arr1=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr1[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
}
