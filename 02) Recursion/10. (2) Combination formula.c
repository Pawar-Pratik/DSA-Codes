//recursive function by pascal's triangle
#include<stdio.h>

int nCr(int n, int r){
    if(r==0 || n==r){
        return 1;
    }
    return nCr(n-1,r-1)+nCr(n-1,r);
}
int main(){
    printf("%d \n",nCr(5,3));
    return 0;
}