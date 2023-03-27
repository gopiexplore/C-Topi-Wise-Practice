//Write a program to find the length of a string.
#include <stdio.h>
void main(){
    char a[]="Welcome";
    int i=0;
    int count=0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    printf("%d ",count);
}

