

//Write a program to find the sum of two numbers using function prototypes.
#include <stdio.h>
//function prototype declaration
void sumoftwo(int a,int b);
//function defination
void sumoftwo(int a,int b){
    printf("%d",a+b);
}
void main(){
    int a,b;
    printf("Enter two numbers to find sum");
    scanf("%d %d",&a,&b);
    //fucntional call 
    sumoftwo(a,b);
}


