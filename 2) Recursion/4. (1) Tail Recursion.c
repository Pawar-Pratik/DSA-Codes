//1) Tail Recursion : when recursion statement is written at end, there shouldn'd be any sinle statement after that.
#include<stdio.h>
void fun(int n){
    if(n>0){
        printf("%d",n);
        fun(n-1);                //<--- There is not a single statement after this statement.
    }
}
int main(){
    fun(3);
}