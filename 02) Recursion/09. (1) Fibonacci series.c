#include<stdio.h>
int Ifib(int n){
    printf("0 1 ");
    int t0=0, t1=1, s=0, i;
    if(n <= 1)
        return n;
    for (i = 2; i <= n; i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
        printf("%d ",s);
    }
    return s;
}

int fib(int n){
    if(n<=1) return n;
    return fib(n-2)+fib(n-1);
}

int main(){
    Ifib(6);
    printf("\nlast number of series : %d",fib(6));
}