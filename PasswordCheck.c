/*Write a program that uses a while loop to prompt the user to enter a password. 
The loop should continue until the user enters the correct password.*/
#include <stdio.h>
#include <string.h>
void main(){
    char password[8];
    char input[8];
    printf("Enter the password ");
    scanf(" %s",password);
    printf("Re enter the password ");
    scanf("%s",input);
    //printf("%i",strcmp(password,input));
    while(strcmp(password,input)!=0){
        printf("Entered password is incorrect Retry");
        scanf("%s",input);
    }
    printf("Enterd password is correct");
    
}
