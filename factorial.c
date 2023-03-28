//Write a program to find the factorial of a number using a function.
#include <stdio.h>
int factorial(int n);
int factorial(int n){
    int fact;
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }else{ 
    fact=n*factorial(n-1);
    }
    return fact;
}
void main(){
    printf("Enter a Number to find factorial of a Number");
    int n;
    scanf("%d",&n);
    int a=factorial(n);
    printf("The factorial of a Number is %d",a);
}
