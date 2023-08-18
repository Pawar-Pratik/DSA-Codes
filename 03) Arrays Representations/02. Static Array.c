#include<stdio.h>
#include<stdlib.h>      //for malloc function

int main(){
    //Sizwe of array is decided at compile time but memory allocation is done at runtime only
    //in C language array size must be constant integer, we cannot place variable or anything else like C++
    int A[5]={1,2,3,4,5}; //normal array Memory allocated at Stack
    int *p;     //required for heap
    p = (int *)malloc(5*sizeof(int)); //created array of size 5 in Heap using malloc function
    p[0]=6;
    p[1]=7;
    p[2]=8;
    p[3]=9;
    p[4]=10;

    printf("\nArray in Stack : \n");
    for(int i=0 ; i<5 ; i++){
        printf("%d\n",A[i]);
    }

    printf("\nArray in Heap : \n");
    for(int i=0 ; i<5 ; i++){
        printf("%d\n",p[i]);
    }

    free(p);// after using Heap memory we should release it, otherwise it will cost data leaks


    return 0;
}