#include<stdio.h>
int main(){
    int A[5];       //Declaration
    int B[2]={1,2}; //Declaration & initialization

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Array A is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",A[i]);
    }

    printf("\nArray B is : ");
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", B[i]);
    } 
}