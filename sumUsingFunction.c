//Write a program to find the sum of two numbers using a function.
#include <stdio.h>
int sum(int a,int b);
int sum(int a,int b){
    return a+b;
}
void main(){
    int a,b;
    printf("Enter Two Numbers To Find Sum");
    scanf("%d %d",&a,&b);
    printf("The sum is %d",sum(a,b));
}
