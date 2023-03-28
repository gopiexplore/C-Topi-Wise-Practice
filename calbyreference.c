


//Write a program to swap two numbers using call by reference method.
#include <stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("Values after Swapping %d %d",*x,*y);
}
void main(){
    int a,b;
    printf("Enter two numbers to swap");
    scanf("%d %d",&a,&b);
    printf("Before Swapping %d %d\n",a,b);
    swap(&a,&b);
}

