







//Write a program to find the factorial of a number using recursion.


#include <stdio.h>
int fact(int a);
int fact(int a){
    if(a>1){
        return a*fact(a-1);
    }
    else return 1;
}
void main(){
    int a;
    printf("Enter a Number to find factorial ");
    scanf("%d",&a);
    printf("The factorial of %d is %d",a,fact(a));
}
