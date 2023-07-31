//Recursion means functiopn calling itself
//there must be termination statement otherwise it will stuck in infinite loop

#include<stdio.h>
void fun(int n){
    if(n>0){                // Termination Condition
        printf("%d ",n);    // Printing while calling
        fun(n-1);           //Function calling itself (Recursion)
    }
}
int main(){
    int x=3;
    fun(x);
}

// here output will be printed in descending order