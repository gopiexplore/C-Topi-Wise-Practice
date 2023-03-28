//Write a program to swap two numbers using call by value method.
#include <stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Values after Swapping %d %d",a,b);
}
void main(){
    int a,b;
    printf("Enter two numbers to swap");
    scanf("%d %d",&a,&b);
    printf("Before Swapping %d %d\n",a,b);
    swap(a,b);
}
