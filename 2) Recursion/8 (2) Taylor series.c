//faster approch
#include<stdio.h>

int e(int x,int n){
    static int s=1;
    if(n==0)
        return 1;
    s=1+(x/n)*s;
    return e(x,n-1);
}
int Ie(int x,int n){
    if(n==0)
        return 1;
    int s=1;
    for(;n>0 ; n--){
        s = 1+(x/n)*s;
    }
    return s;
}
int main(){
    int x= e(1,2);
    printf("%d",x);
    x=Ie(1,2);
    printf("%d",x);
}