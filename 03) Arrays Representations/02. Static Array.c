#include<stdio.h>
#include<stdlib.h>      //for malloc function

int main(){
    //Sizwe of array is decided at compile time but memory allocation is done at runtime only
    //in C language array size must be constant integer, we cannot place variable or anything else like C++
    int A[2]={1,2,3,4,5}; //normal array Memory allocated at Stack
    int *p;     //required for heap
    p = (int *)malloc(5*sizeof(int));

    return 0;
}