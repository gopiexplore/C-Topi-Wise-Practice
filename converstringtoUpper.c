//Write a program to convert a string to uppercase.
#include <stdio.h>
void main(){
    char a[]="abcdef";
    int i=0;
    while(a[i]!='\0'){
        //printf("%d ",a[i]);
        int x=a[i];
        if(x>=97 && x<=122){
            a[i]=a[i]-32;
        }
        
        i++;
}
printf("%s",a);
    
}


