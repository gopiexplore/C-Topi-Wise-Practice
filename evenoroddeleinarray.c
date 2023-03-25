
/*Write a program to count the number of even and odd numbers in an array.*/
#include <stdio.h>
#include <conio.h>
void main(){
    int a[]={1,23,5,122,54,55};
    int i,n,even,odd;
    even=0;
    odd=0;
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else odd++;
    }
    printf("Even Numbers in array is %d and Odd Numbers count are %d",even,odd);
}
