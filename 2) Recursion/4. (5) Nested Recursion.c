//5) Nested Recursion : Recursion inside recursion,
//   Recursive function will pass Recursive parameter as Recursive call

#include<stdio.h>
int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        printf("%d ",n);
        fun(fun(n+11));         //here function is passed as parameter to recursive function
    }
    return 0;
}
int main(){
    fun(95);
}
