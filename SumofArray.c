/*Single-dimensional Arrays:

Write a program to find the sum of all elements in an array.
*/
#include <stdio.h>
void main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int a;
    int sum=0;
    for(a=0;a<10;a++){
        sum=sum+array[a];
    }
    printf("The sum of elements in array is %d",sum);
}

