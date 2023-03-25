
/*Write a program to reverse the elements of an array.*/
#include <stdio.h>
#include <conio.h>
void main(){
    int a[]={1,2,3,4,5};
    int n,i,temp,j,x;
    n=sizeof(a)/sizeof(a[0]);
    x=n;
    for(i=0;i<n;i++){
        temp=a[i];
        a[i]=a[n-1];
        a[n-1]=temp;
        n--;
    }
    for(j=0;j<x;j++){
        printf("%d ",a[j]);
    }
}

