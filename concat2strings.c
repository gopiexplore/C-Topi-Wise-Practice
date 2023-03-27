/*String Manipulation Functions:

Write a program to concatenate two strings.
*/
#include <stdio.h>
#include <string.h>
void main(){
    char a[]="gopi How are you ";
    char b[]="Ajay Welcome anna";
    int x=strlen(a)+strlen(b);
    //printf("%d",x);
    char c[x];
    int i=0;
    int j=0;
    while(a[i]!='\0'){
        c[i]=a[i];
        i++;
        j++;
    }
    i=0;
    while(b[i]!='\0')
    {
        c[j]=b[i];
        j++;
        i++;
    }
    printf("%s",c);
}
