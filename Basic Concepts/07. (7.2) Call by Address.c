#include<stdio.h>
void Swap(int *x,int *y){     //pointers
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;        //actual parameters
    a=10;
    b=20;
    printf("(Before) %d,%d",a,b);
    Swap(&a,&b);
    printf("\n(after) %d,%d",a,b);
}

//here swapping wont take place because, changes done to formal parameters does not reflectss on actual parameters.
//also we cannot access variables of different functions directly.