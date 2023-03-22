/*Input/Output (printf, scanf):

Write a program that prompts the user to enter their name and age. 
Then, print a message to the console that says "Hello, [name]. You are [age] years old.*/
#include <stdio.h>
void main(){
    char name[30];
    int age;
    printf("Enter The age ");
    scanf("%d",&age);
    printf("Enter the name ");
    scanf("%s",name);
    printf("Hello, %s . you are %d years old.",name,age);
