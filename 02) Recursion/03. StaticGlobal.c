#include<stdio.h>
//int x=0;                      //Global variable
int fun(int n){
    static int x=0;             //Static variable
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main(){
    int r=fun(5);
    printf("%d\n",r);           //here output will be 25, at last recursioin fun(0) x will be 5. and addition will get start.
    r=fun(5);
    printf("%d",r);             //as above recursion x was 5, after calling again x will be 10,  hence 2nd output will be 50.
    return 0;    
}