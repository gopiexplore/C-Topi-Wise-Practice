//Write a program to deallocate memory allocated dynamically for an array.
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n,i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int *arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    
}


