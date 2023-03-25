/*Write a program to sort an array in ascending order using bubble sort.*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[]={5,6,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j,temp,k;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    for(k=0;k<n;k++){
        printf("%d ",a[k]);
    }
}
