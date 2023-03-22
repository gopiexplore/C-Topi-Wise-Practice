/*Conditional Statements (if, switch):

Write a program that prompts the user to enter their age.
If their age is greater than or equal to 18, print "You are an adult." Otherwise, print "You are a minor."*/
#include <stdio.h>
void main(){
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("You are an adult");
    }else {
        printf("You are a  minor");
    }
}
