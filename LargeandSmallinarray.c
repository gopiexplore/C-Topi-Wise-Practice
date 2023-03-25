/*Write a program to find the largest and smallest elements in an array.*/
#include <stdio.h>
void main(){
    int array[10]={1,2,3,11,44,2,345,3,253,421};
    int small=array[0];
    int largest=array[0];
    int i;
    for(i=0;i<10;i++){
        if(array[i]>largest){
            largest=array[i];
        }
        if(array[i]<small){
            small=array[i];
        }
    }
    printf("The smallest element in array is %d and largest element is %d",small,largest);
}
