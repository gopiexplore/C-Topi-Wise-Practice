

//Write a program to find the frequency of a character in a string
#include <stdio.h>
void main(){
    char c;
    char a[]="Welcome to Gopi";
    printf("Enter the character to find frequency in a string ");
    scanf("%c",&c);
    int frequency=0;
    
    int i;
    for(i=0;i<sizeof(a);i++){
        if(a[i]==c){
            frequency++;
        }
        
    }
    printf("The frequency of %c is %d",c,frequency);
}



