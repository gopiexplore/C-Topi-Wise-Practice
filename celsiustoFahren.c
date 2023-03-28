//Write a program to convert Celsius to Fahrenheit using a function.
#include <stdio.h>
void Fahrenheit(int c);
void Fahrenheit(int c){
    int faren=(c*(9/5)+32);
    printf("The Fahrenheit of given celsius is %d",faren);
}
void main(){
    int c;
    printf("Enter the celsius to find Fahrenheit ");
    scanf("%d",&c);
    Fahrenheit(c);
}
