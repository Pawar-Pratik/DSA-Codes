#include<stdio.h>
#include<stdlib.h>      //required for malloc function

int main(){
    int *p;
    p=(int *)malloc(5*sizeof(int));     //malloc used to store data dynamically (in Heap memory)
    printf("%d",p);
}