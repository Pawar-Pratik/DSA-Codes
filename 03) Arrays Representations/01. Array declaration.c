#include<stdio.h>
int main(){
    int i;
    //Here are 5 ways to declare array :
    // 1st 
    //Declaring array without initializing values, so all values in this array will be garbage values
    int A[5];
    printf("1nd Array\n");
    for(i=0 ; i < 5 ; i++ ){
        printf("%d \n",A[i]);
    }

    // 2nd :
    //Declaring and initializing array
    int B[5]={1,2,3,4,5};
    printf("\n2nd Array\n");
    for(i=0 ; i < 5 ; i++ ){
        printf("%d \n",B[i]);
    }

    //3rd :
    //Declaring array but initializing only few values, here non initialized values will automatically be 0
    int C[5]={1,2};
    printf("\n3rd Array\n");
    for(i=0 ; i<5 ; i++){
        printf("%d \n",C[i]);
    }

    //4th :
    //declaring and initializing
    int D[5]={0};
    printf("\n4th Array\n");
    for(i=0 ; i<5 ; i++){
        printf("%d\n",D[i]);
    }

    //5th : 
    //declaring array without limit, and initializing array, here size of array will be same as number of elements
    int E[]={1,2,3,4,5,6,7,8};
    printf("\n5th Array");
    int length = sizeof(E) / sizeof(E[0]);
    printf("\nArray length : %d\n",length);


    //Array : Array is collection of similar data elements undes same name.
    //Array is stored at contagious location we will print addresses of array A[] to verify it
    printf("\nAddresses of 1st Array\n");
    for(i=0 ; i<5 ; i++){
        printf("%u \n",&A[i]);
    } 
    //as you can see in output int have 4 bytes, so there every next address is increased by 4.
    return 0;
}