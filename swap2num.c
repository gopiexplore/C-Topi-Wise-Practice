//Write a program that declares two integer variables and assigns them values.
//Then, swap the values of the two variables and print their new values.
#include <stdio.h>
void main(){
    int a=100;
    int b=200;
    printf("Before swapping two variabels are a= %d b=%d\n",a,b);
    int c=a;
    a=b;
    b=c;
    printf("After swapping two variables are a=%d , b=%d",a,b);
    /*logic 1
    a=a+b; 300
    b=a-b; 100
    a=a-b; 200
    logic 2
    a=a*b;   1*2=2
    b=a/b;   2/2=1
    a=a/b;   2/1=2*/
    
}
