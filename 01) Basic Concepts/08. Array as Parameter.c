//we can only pass array by "call by address method"
#include<stdio.h>
void fun(int B[],int n){
    printf("Array in Function 1 : ");
    for(int i=0 ; i<n ; i++){
        printf("%d ",B[i]);
    }
}
void fun2(int *B, int n){
    printf("\nArray in Function 2 : ");
    for(int i=0 ; i<n ; i++){
        printf("%d ",B[i]);
    }
}
int main(){
    int A[3] = {1,2,3};
    fun(A,3);
    fun2(A,3);
}