#include<stdio.h>
int main(){
    //Here are 5 ways to declare array :
    // 1st 
    //Declaring array without initializing values, so all values in this array will be garbage values
    int A[5];
    printf("1nd Array");
    for(int i=0 ; i < 5 ; i++ ){
        printf("%d \n",A[i]);
    }

    // 2nd :
    //Declaring and initializing array
    int B[5]={1,2,3,4,5};
    printf("\n2nd Array");
    for(int i=0 ; i < 5 ; i++ ){
        printf("%d \n",B[i]);
    }

    
    return 0;
}