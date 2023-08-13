#include<stdio.h>
int power(int m,int n){
    if(m==0)
        return 1;
    if(n%2==0){
        return power(m*m, n/2);
    }
    else
        return m*power(m*m, n/2);
}

int main(){
    int x;
    x = power(2,5);
    printf("%d", x);
}