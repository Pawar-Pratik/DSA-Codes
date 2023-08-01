//2) Head Recursion : when recursion statement is written first, all other statement must be written after recursion statement.

#include<stdio.h>
void fun(int n){
    if(n>0){
        fun(n-1);                //<--- There is not a single statement before this statement.
        printf("%d",n);
    }
}
int main(){
    fun(3);
}