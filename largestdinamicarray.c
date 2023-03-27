
//Write a program to find the largest element in an array allocated dynamically.
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n,i;
    printf("Enter the size of the array to allocate dynamically");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter %d element ",i);
        scanf("%d",&arr[i]);
    }
        
    int largest=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The largest in array is %d",largest);
}




