#include<stdio.h>
int add(int x,int y){
    int z;
    z=x+y;
    return z;
}
int main(){
    int a=15,b=20;
    int c=add(a,b);
    printf("Addition is : %d",c);
}