//4) Indirect Recursion : theremay multiple functions calling eachother in circular manner, it doesn't calls itself,
//   but calling happens in circular manner hence it comes under recursion topic.      (A -> B -> A -> B ->...)

#include<stdio.h>
void funB(int n);               //as function is getting called before its definition, so to resolve error we defined function here 
void funA(int n){
    if(n>0){
        printf("%d ",n);
        funB(n-1);               //funA calling funB
    }
}
void funB(int n){
    if(n>1){
        printf("%d ",n);
        funA(n/2);               //funB calling funA
    }
}
int main(){
    funA(20);
}