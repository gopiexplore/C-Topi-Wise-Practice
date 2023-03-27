//Dynamic Memory Allocation:

//Write a program to allocate memory dynamically for an array.
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    printf("Enter the size of the Array to allocate dynamically");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("After dynamically allocated Array");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

#include <stdio.h>
void main(){
    int n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        printf("%d ",array[i]);
    }

}
//here the problem is if we enter array line by line come
//we can over come it by writing it another for loop


