//Recursion means functiopn calling itself
//there must be termination statement otherwise it will stuck in infinite loop

#include<stdio.h>
void fun(int n){
    if(n>0){                // Termination Condition
        fun(n-1);           //Function calling itself (Recursion)
        
        printf("%d ",n);    // Printing while returning
    }
}
int main(){
    int x=3;
    fun(x);
}

// here output will be printed in ascending order

//there is only one minor change in this code than code 1.
//here printf statement is written after calling itself, this line will continue after function gets terminated.
//hence last output will be printed first. so output will be : 1 2 3