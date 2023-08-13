#include<stdio.h>
int main(){
    int a=10;       //data variable (contains data)
    int *p;         //Address variable (contains Address)

    p = &a;         //referencing

    printf("int a : %d",a);     //using data variable
    printf("\nint a : %d",*p);    //using pointer variable (Dereferencing)
    printf("\nint a address : %d",p);
}