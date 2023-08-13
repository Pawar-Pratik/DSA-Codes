#include<stdio.h>

int fact(int n){
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}
int Ifact(int n){
    int f=1,i;
    for(i=1 ; i<=n ; i++){
        f = f*i;
    }
    return f;
}
int main(){
    int x = fact(3);
    printf("%d \n",x);

    int y = Ifact(3);
    printf("%d",y);
}