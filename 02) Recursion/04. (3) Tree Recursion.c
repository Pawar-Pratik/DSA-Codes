//3) Tree Recursion : when recursion statement is written more than one time. as below code there are two recursion statements.

#include<stdio.h>
void fun(int n){
    if(n>0){
        printf("%d ",n);
        fun(n-1);                //1  
        fun(n-1);                //2
    }
}
int main(){
    fun(3);
}